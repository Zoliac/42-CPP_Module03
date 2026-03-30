/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpatin <lpatin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 11:52:46 by lpatin            #+#    #+#             */
/*   Updated: 2026/03/17 18:18:33 by lpatin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <iostream>

#include"ClapTrap.hpp"

class ScavTrap:public ClapTrap
{
	private:
		/* data */
	public:
		ScavTrap();
		ScavTrap(std::string str);
		ScavTrap(const ScavTrap& other);
		ScavTrap& operator=(const ScavTrap& other);
		~ScavTrap();
		void attack(const std::string& target);
		void guardGate();
};

#endif