/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:01:50 by rgiambon          #+#    #+#             */
/*   Updated: 2025/03/18 11:01:52 by rgiambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
    public:
        
        ScavTrap();                               // Default constructor
        ScavTrap(std::string trapName);           // Parameterized constructor
        ScavTrap(const ScavTrap& other);          // Copy constructor
        ScavTrap& operator=(const ScavTrap& other);  // Copy assignment operator
        virtual ~ScavTrap();                      // Virtual destructor

        void attack(const std::string& target);
        void guardGate();
};

#endif
