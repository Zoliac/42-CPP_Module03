/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpatin <lpatin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 11:52:44 by lpatin            #+#    #+#             */
/*   Updated: 2026/03/27 15:51:32 by lpatin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "A new ScavTrap spawned ! Be careful :o" << std::endl;
	this->_hitpoints = 100;
	this->_energypoints = 50;
	this->_dmg = 20;
}

ScavTrap::ScavTrap(std::string str) : ClapTrap(str)
{
	std::cout << "Parametrize Constructor ScavTrap" << std::endl;
	this->_hitpoints = 100;
	this->_energypoints = 50;
	this->_dmg = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << " Copy Constructor ScavTrap " << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this == &other)
		return *this;
	this->_name = other._name;
	this->_hitpoints = other._hitpoints;
	this->_energypoints = other._energypoints;
	this->_dmg = other._dmg;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap despawned!" << std::endl;
}
void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gatekeeper mode." << std::endl;
}
void ScavTrap::attack(const std::string& target)
{
	if(this->_hitpoints <= 0 || this->_energypoints <= 0)
		std::cout << " ScavTrap " << this->_name << " can't attack no hit points or energy left " << this->_name << " has already done a lot..." << std::endl;
	else
	{
		this->_energypoints--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_dmg << " points of damage, how could he be this strong ?? :o "<< std::endl;    
	}
}