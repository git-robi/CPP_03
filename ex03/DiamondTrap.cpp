#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) :
    ClapTrap(name + "_clap_name"),
    FragTrap(name),
    ScavTrap(name),
    name(name)
{
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap " << name << " is created!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) :
    ClapTrap(other), 
    FragTrap(other),   
    ScavTrap(other), 
    name(other.name)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other); 
        name = other.name;         
    }
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << name << " is destroyed!" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "I am DiamondTrap " << name;
    std::cout << ", also known as ClapTrap " << ClapTrap::name << std::endl;
}