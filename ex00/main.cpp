#include "ClapTrap.hpp"
#include <iostream>

int main(void)
{
    ClapTrap trap("trap");

    trap.attack("enemy");
    trap.takeDamage(3);
    trap.beRepaired(2);

    std::cout << "ClapTrap hit points: " << trap.getHitPoints() << std::endl;

    std::cout << "ClapTrap energy points: " << trap.getEnergyPoints() << std::endl;

    return 0;
}