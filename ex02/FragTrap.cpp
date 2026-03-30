/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpatin <lpatin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 11:52:54 by lpatin            #+#    #+#             */
/*   Updated: 2026/03/26 12:36:19 by lpatin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
	std::cout << "Default Constructor FragTrap" << std::endl;
	this->_hitpoints = 100;
	this->_energypoints = 100;
	this->_dmg = 30;
}

FragTrap::FragTrap(std::string str) : ClapTrap(str){
	std::cout << "Parametrize Constructor FragTrap" << std::endl;
	this->_hitpoints = 100;
	this->_energypoints = 100;
	this->_dmg = 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other){
	std::cout << "Copy Constructor from the FragTrap called." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other){
	if (this == &other)
		return *this;
	ClapTrap::operator=(other);
	return *this;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap just went away, he was too bored sadly !" << std::endl;
}

void FragTrap::attack(const std::string& target){
	if(this->_hitpoints <= 0 || this->_energypoints <= 0)
		std::cout << " FragTrap " << this->_name << " can't attack no hit points or energy left, " << this->_name << " is too tired sadly :(" << std::endl;
	else
	{
		this->_energypoints--;
		std::cout << "FragTrap " << this->_name << " attacks " << target << " causing " << this->_dmg << " damage, which is a lot, because he's just better ! "<< std::endl;    
	}
}

void FragTrap::highFivesGuys(void){
	std::cout << "FragTrap " << this->_name << " requests a high five " << std::endl;
}