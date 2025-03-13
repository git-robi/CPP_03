#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string trapName) : name(trapName), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap " << name << " constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (getEnergyPoints() == 0)
    {
            std::cout << "No energy points. ClapTrap cannot attack" << std::endl;
            return ;
    }
    if (getHitPoints() == 0)
    {
            std::cout << "No hit points. ClapTrap cannot attack" << std::endl;
            return ;
    }
    decreaseEnergyPoints();
    std::cout << "ClapTrap " << getName() << " attacks " << target 
              << " causing " << getAttackDamage() << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (getHitPoints() == 0)
    {
            std::cout << "ClapTrap " << getName() << " is already at 0 hit points!" << std::endl;
            return ;
    }
    decreaseHitPoints(amount);
    std::cout << "ClapTrap " << getName() << " takes " << amount << " damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (getEnergyPoints() == 0)
    {
            std::cout << "No energy points. ClapTrap cannot repair" << std::endl;
            return ;
    }
    if (getHitPoints() == 0)
    {
            std::cout << "No hit points. ClapTrap cannot repair" << std::endl;
            return ;
    }
    decreaseEnergyPoints();
    increaseHitPoints(amount);
    std::cout << "ClapTrap " << getName() << " repairs itself"
              << " gaining " << amount << " hit points!" << std::endl;
}

std::string ClapTrap::getName() const
{
    return (this->name);
}

unsigned int ClapTrap::getHitPoints() const
{
    return (this->hitPoints);
}

unsigned int ClapTrap::getEnergyPoints() const
{
    return (this->energyPoints);
}

unsigned int ClapTrap::getAttackDamage() const
{
    return (this->attackDamage);
}

void ClapTrap::setHitPoints(unsigned int points)
{
    this->hitPoints = points;
}

void ClapTrap::setEnergyPoints(unsigned int points)
{
    this->energyPoints = points;
}

void ClapTrap::setAttackDamage(unsigned int damage)
{
    this->attackDamage = damage;
}

void ClapTrap::decreaseEnergyPoints()
{
    if (energyPoints > 0)
        energyPoints--;
}

void ClapTrap::decreaseHitPoints(unsigned int amount)
{
    if (amount >= hitPoints)
        hitPoints = 0;
    else
        hitPoints -= amount;
}

void ClapTrap::increaseHitPoints(unsigned int amount)
{
    hitPoints += amount;
}