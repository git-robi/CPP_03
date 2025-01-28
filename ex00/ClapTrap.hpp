#pragma once
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:

    std::string name;
    int hit_points;
    int energy_points;
    int attack_damage;

    public:

    ClapTrap(std::string trap_name) : name(name), hit_points(10), energy_points(10), attack_damage(0){};
    ~ClapTrap();
    
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif