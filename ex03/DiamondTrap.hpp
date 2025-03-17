#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    private:

    std::string name;

    public:
    
    DiamondTrap();                               // Default constructor
    DiamondTrap(std::string name);               // Parameterized constructor
    DiamondTrap(const DiamondTrap& other);       // Copy constructor
    DiamondTrap& operator=(const DiamondTrap& other); // Copy assignment operator
    virtual ~DiamondTrap();                      // Virtual destructor

    void whoAmI();
    using ScavTrap::attack; 
};

#endif