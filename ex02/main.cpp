/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpatin <lpatin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 11:52:57 by lpatin            #+#    #+#             */
/*   Updated: 2026/03/27 15:52:12 by lpatin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	ClapTrap a("Bob");
	a.attack("Enemy");
	a.takeDamage(5);
	a.beRepaired(3);
	
	std::cout << std::endl;
	
	ScavTrap b("Alice");
	b.attack("Enemy");
	b.takeDamage(10);
	b.beRepaired(5);
	b.guardGate();

	std::cout << std::endl;

	FragTrap c("LA FAMILLE");
	c.attack("Enemy");
	c.takeDamage(50);
	c.beRepaired(20);
	c.highFivesGuys();

	return 0;
}