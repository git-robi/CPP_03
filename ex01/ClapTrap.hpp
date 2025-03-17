#pragma once
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:

    std::string name;
    unsigned int hitPoints;
    unsigned int energyPoints;
    unsigned int attackDamage;

    public:
    ClapTrap();                              // Default constructor
    ClapTrap(std::string trapName);          // Parameterized constructor
    ClapTrap(const ClapTrap& other);         // Copy constructor
    ClapTrap& operator=(const ClapTrap& other); // Copy assignment operator
    ~ClapTrap();                            // Destructor
    
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    std::string getName() const;
    unsigned int getHitPoints() const;
    unsigned int getEnergyPoints() const;
    unsigned int getAttackDamage() const;

    void decreaseEnergyPoints();
    void decreaseHitPoints(unsigned int amount);
    void increaseHitPoints(unsigned int amount);
};

#endif