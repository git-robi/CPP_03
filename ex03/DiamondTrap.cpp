/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:00:45 by rgiambon          #+#    #+#             */
/*   Updated: 2025/03/18 11:00:47 by rgiambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() :
    ClapTrap("default_clap_name"),
    FragTrap(),
    ScavTrap(),
    name("default")
{
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) :
    ClapTrap(name + "_clap_name"),
    FragTrap(name),
    ScavTrap(name),
    name(name)
{
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap " << name << " is created!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) :
    ClapTrap(other), 
    FragTrap(other),   
    ScavTrap(other), 
    name(other.name)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other); 
        name = other.name;         
    }
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << name << " is destroyed!" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "I am DiamondTrap " << name;
    std::cout << ", also known as ClapTrap " << ClapTrap::name << std::endl;
}
