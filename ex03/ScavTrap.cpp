#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string trapName) : ClapTrap(trapName)
{
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap " << getName() << " constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << getName() << " destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (getEnergyPoints() == 0)
    {
            std::cout << "No energy points. ScavTrap cannot attack" << std::endl;
            return ;
    }
    if (getHitPoints() == 0)
    {
            std::cout << "No hit points. ScavTrap cannot attack" << std::endl;
            return ;
    }
    decreaseEnergyPoints();
    std::cout << "ScavTrap " << getName() << " attacks " << target 
              << " causing " << getAttackDamage() << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode" << std::endl;
}