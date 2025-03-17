#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("default"), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string trapName) : name(trapName), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->name = other.name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (energyPoints == 0)
    {
        std::cout << "No energy points. ClapTrap cannot attack" << std::endl;
        return;
    }
    if (hitPoints == 0)
    {
        std::cout << "No hit points. ClapTrap cannot attack" << std::endl;
        return;
    }
    energyPoints--;
    std::cout << "ClapTrap " << name << " attacks " << target 
              << " causing " << attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hitPoints == 0)
    {
        std::cout << "ClapTrap " << name << " is already at 0 hit points!" << std::endl;
        return;
    }
    if (amount >= hitPoints)
        hitPoints = 0;
    else
        hitPoints -= amount;
    std::cout << "ClapTrap " << name << " takes " << amount << " damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energyPoints == 0)
    {
        std::cout << "No energy points. ClapTrap cannot repair" << std::endl;
        return;
    }
    if (hitPoints == 0)
    {
        std::cout << "No hit points. ClapTrap cannot repair" << std::endl;
        return;
    }
    energyPoints--;
    hitPoints += amount;
    std::cout << "ClapTrap " << name << " repairs itself"
              << " gaining " << amount << " hit points!" << std::endl;
}

std::string ClapTrap::getName() const
{
    return name;
}

unsigned int ClapTrap::getHitPoints() const
{
    return hitPoints;
}

unsigned int ClapTrap::getEnergyPoints() const
{
    return energyPoints;
}

unsigned int ClapTrap::getAttackDamage() const
{
    return attackDamage;
}