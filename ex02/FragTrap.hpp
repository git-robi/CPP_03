#pragma once
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();                               // Default constructor
        FragTrap(std::string trapName);           // Parameterized constructor
        FragTrap(const FragTrap& other);          // Copy constructor
        FragTrap& operator=(const FragTrap& other);  // Copy assignment operator
        ~FragTrap();                             // Destructor

        void highFivesGuys(void);
};

#endif
