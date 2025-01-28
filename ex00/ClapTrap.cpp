#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string trap_name) : name(trap_name), hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    //attacks and causes the target to lose hit points
    if (this->energy_points == 0)
    {
            std::cout << "No energy points. ClapTrap cannot attack" << std::endl;
            return ;
    }
    if (this->hit_points == 0)
    {
            std::cout << "No hit points. ClapTrap cannot attack" << std::endl;
            return ;
    }
    this->energy_points--;
    std::cout << "ClapTrap " << this->name << " attacks " << target 
              << " causing " << this->attack_damage << " points of damage!" << std::endl;
}
    
    
void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hit_points == 0)
    {
            std::cout << "Target has 0 hit points." << std::endl;
            return ;
    }
    this->hit_points -= amount;
    std::cout << "ClapTrap " << this->name << " is attacked "
              << " losing " << amount << " hit points!" << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energy_points == 0)
    {
            std::cout << "No energy points. ClapTrap cannot repair itself" << std::endl;
            return ;
    }
    if (this->hit_points == 0)
    {
            std::cout << "No hit points. ClapTrap cannot repair itself" << std::endl;
            return ;
    }
    this->energy_points--;
    this->hit_points += amount;
    std::cout << "ClapTrap " << this->name << " repairs itself "
              << " gaining " << amount << " hit points!" << std::endl;
}