/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpatin <lpatin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 11:52:34 by lpatin            #+#    #+#             */
/*   Updated: 2026/03/27 15:54:42 by lpatin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():_hitpoints(10), _energypoints(10),_dmg(0){
	std::cout << "Default constructor, ClapTrap appeared." << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "Called Destructor, ClapTrap got anihilated." << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitpoints(10), _energypoints(10), _dmg(0) {
	std::cout << "Parametrize Constructor for ClapTrap" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other){
	if (this == &other)
		return *this;
	this->_name = other._name;
	this->_hitpoints = other._hitpoints;
	this->_energypoints = other._energypoints;
	this->_dmg = other._dmg;
	return *this;
}

ClapTrap::ClapTrap(const ClapTrap& other) : _name(other._name), _hitpoints(other._hitpoints), _energypoints(other._energypoints),_dmg(other._dmg){
	std::cout << "copy Constructor for ClapTrap" << std::endl;
}

void ClapTrap::attack(const std::string& target){
	if(this->_hitpoints <= 0 || this->_energypoints <= 0){
		std::cout << "ClapTrap " << this->_name << " can't attack no hit points or energy left" << std::endl;
	}
	else{
		this->_energypoints--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_dmg << " points of damage! "<< std::endl;    
	}
}

void ClapTrap::takeDamage(unsigned int amount){
	if (this->_hitpoints > 0){
		if (this->_hitpoints < (int)amount)
			this->_hitpoints = 0;
		else
			this->_hitpoints -= amount;
		std::cout << "ClapTrap " << _name << " attack " << amount << " hit points of damage " << std::endl;
		this->_energypoints--;
	}
	else
		std::cout << "ClapTrap " << this->_name << " can't attack no hit points or energy left" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if(this->_hitpoints <= 0 || this->_energypoints <= 0){
		std::cout << "ClapTrap " << this->_name << " can't attack no hit points or energy left" << std::endl;
	}
	else{
		this->_hitpoints += amount;
		std::cout << "ClapTrap " << _name << " repairs itself gaining " << amount << " hit points " << std::endl;
		this->_energypoints--; 
	}
}