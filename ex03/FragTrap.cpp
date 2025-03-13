#include "FragTrap.hpp"

FragTrap::FragTrap(std::string trapName) : ClapTrap(trapName)
{
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap " << getName() << " constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << getName() << " destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << getName() << " requests a positive high five!" << std::endl;
}
