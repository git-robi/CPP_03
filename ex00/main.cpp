#include "ClapTrap.hpp"
#include <iostream>

int main(void)
{
    ClapTrap clap("Clap");
    
    std::cout << "\n=== Combat Test ===\n" << std::endl;

    clap.attack("enemy");
    std::cout << "HP: " << clap.getHitPoints() << ", EP: " << clap.getEnergyPoints() << std::endl;
    
    clap.takeDamage(5);
    std::cout << "After taking 5 damage - HP: " << clap.getHitPoints() << std::endl;
    
    clap.beRepaired(2);
    std::cout << "After repair - HP: " << clap.getHitPoints() << ", EP: " << clap.getEnergyPoints() << std::endl;

    return 0;
}