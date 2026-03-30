/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpatin <lpatin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 11:52:42 by lpatin            #+#    #+#             */
/*   Updated: 2026/03/17 18:22:56 by lpatin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

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
	
	return 0;
}