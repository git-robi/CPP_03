/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgiambon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 10:59:19 by rgiambon          #+#    #+#             */
/*   Updated: 2025/03/18 10:59:21 by rgiambon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();                               // Default constructor
        FragTrap(std::string trapName);           // Parameterized constructor
        FragTrap(const FragTrap& other);          // Copy constructor
        FragTrap& operator=(const FragTrap& other);  // Copy assignment operator
        ~FragTrap();                             // Destructor

        void highFivesGuys(void);
};

#endif
