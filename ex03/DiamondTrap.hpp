/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:00:52 by rgiambon          #+#    #+#             */
/*   Updated: 2025/03/18 11:00:53 by rgiambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
