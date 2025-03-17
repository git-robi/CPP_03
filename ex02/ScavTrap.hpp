#pragma once
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
    
        ScavTrap();                               // Default constructor
        ScavTrap(std::string trapName);           // Parameterized constructor
        ScavTrap(const ScavTrap& other);          // Copy constructor
        ScavTrap& operator=(const ScavTrap& other);  // Copy assignment operator
        ~ScavTrap();                             // Destructor

        void attack(const std::string& target);
        void guardGate();
};

#endif