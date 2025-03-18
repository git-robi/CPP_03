/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:01:15 by rgiambon          #+#    #+#             */
/*   Updated: 2025/03/18 11:01:16 by rgiambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

int main(void)
{
    std::cout << "\n=== Creating DiamondTrap ===\n" << std::endl;
    DiamondTrap d1("Diamond1");
    
    std::cout << "\n=== Testing Basic Functions ===\n" << std::endl;
    d1.whoAmI();
    d1.attack("Enemy");           // Should use ScavTrap's attack
    std::cout << "Hit points: " << d1.getHitPoints() << std::endl;
    std::cout << "Energy points: " << d1.getEnergyPoints() << std::endl;
    std::cout << "Attack damage: " << d1.getAttackDamage() << std::endl;
    
    d1.takeDamage(30);
    std::cout << "After taking damage, hit points: " << d1.getHitPoints() << std::endl;
    
    d1.beRepaired(20);
    std::cout << "After repair, hit points: " << d1.getHitPoints() << std::endl;
    
    std::cout << "\n=== Testing Inherited Special Abilities ===\n" << std::endl;
    d1.guardGate();               // From ScavTrap
    d1.highFivesGuys();          // From FragTrap
    
    std::cout << "\n=== Testing Copy Constructor ===\n" << std::endl;
    DiamondTrap d2(d1);          // Copy constructor
    d2.whoAmI();
    std::cout << "Copy's hit points: " << d2.getHitPoints() << std::endl;
    std::cout << "Copy's energy points: " << d2.getEnergyPoints() << std::endl;
    
    std::cout << "\n=== Testing Assignment Operator ===\n" << std::endl;
    DiamondTrap d3("Diamond3");
    d3 = d1;                     // Assignment operator
    d3.whoAmI();
    std::cout << "Assigned's hit points: " << d3.getHitPoints() << std::endl;
    std::cout << "Assigned's energy points: " << d3.getEnergyPoints() << std::endl;
    
    std::cout << "\n=== Testing Multiple Actions ===\n" << std::endl;
    d1.attack("Boss");
    d2.takeDamage(50);
    d3.beRepaired(10);
    
    std::cout << "\n=== Destructors will be called ===\n" << std::endl;
    return 0;
}
