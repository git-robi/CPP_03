#pragma once
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
    public:
        FragTrap(std::string trapName);
        ~FragTrap();

        void highFivesGuys(void);
};

#endif
