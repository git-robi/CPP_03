#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main(void)
{
    std::cout << "=== Testing ClapTrap ===" << std::endl;
    ClapTrap clap("Clappy");

    clap.attack("enemy");
    std::cout << "ClapTrap hit points: " << clap.getHitPoints() << std::endl;
    std::cout << "ClapTrap energy points: " << clap.getEnergyPoints() << std::endl;
    std::cout << "ClapTrap attack damage: " << clap.getAttackDamage() << std::endl;
    
    clap.takeDamage(3);
    std::cout << "After taking damage, hit points: " << clap.getHitPoints() << std::endl;
    
    clap.beRepaired(2);
    std::cout << "After repair, hit points: " << clap.getHitPoints() << std::endl;

    std::cout << "\n=== Testing ScavTrap ===" << std::endl;
    ScavTrap scav("Scavvy");

    scav.attack("enemy");
    std::cout << "ScavTrap hit points: " << scav.getHitPoints() << std::endl;
    std::cout << "ScavTrap energy points: " << scav.getEnergyPoints() << std::endl;
    std::cout << "ScavTrap attack damage: " << scav.getAttackDamage() << std::endl;
    
    scav.takeDamage(30);
    std::cout << "After taking damage, hit points: " << scav.getHitPoints() << std::endl;
    
    scav.beRepaired(20);
    std::cout << "After repair, hit points: " << scav.getHitPoints() << std::endl;
    
    scav.guardGate();

    std::cout << "\n=== Testing FragTrap ===" << std::endl;
    FragTrap frag("Fraggy");

    frag.attack("enemy");
    std::cout << "FragTrap hit points: " << frag.getHitPoints() << std::endl;
    std::cout << "FragTrap energy points: " << frag.getEnergyPoints() << std::endl;
    std::cout << "FragTrap attack damage: " << frag.getAttackDamage() << std::endl;
    
    frag.takeDamage(30);
    std::cout << "After taking damage, hit points: " << frag.getHitPoints() << std::endl;
    
    frag.beRepaired(20);
    std::cout << "After repair, hit points: " << frag.getHitPoints() << std::endl;
    
    frag.highFivesGuys();

    return 0;
}