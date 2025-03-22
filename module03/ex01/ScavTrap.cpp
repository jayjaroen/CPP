/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 21:34:30 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/22 13:01:42 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	_name = "";
	_hitPoints = SCAV_HP;
	_energyPoints = SCAV_ENERGY;
	_attackDamage = SCAV_ATTACK;
	
	std::cout << "+++++++++++++++++++++++++++++++++++++" << std::endl;
	std::cout << "ScavTrap: Default Constructor Called" << std::endl;
	std::cout << SCAV_TYPE << _name << " is created" << std::endl;
	std::cout << "Hit points init: " << _hitPoints << std::endl;
	std::cout << "Energy points init: " << _energyPoints << std::endl;
	std::cout << "Attack damage init: " << _attackDamage << std::endl;
	std::cout << "+++++++++++++++++++++++++++++++++++++" << std::endl;
}

ScavTrap::ScavTrap(const std::string name)
{
	_name = name;
	_hitPoints = SCAV_HP;
	_energyPoints = SCAV_ENERGY;
	_attackDamage = SCAV_ATTACK;
	
	std::cout << "+++++++++++++++++++++++++++++++++++++" << std::endl;
	std::cout << "ScavTrap: Parameter Constructor Called" << std::endl;
	std::cout << SCAV_TYPE << _name << " is created" << std::endl;
	std::cout << "Hit points init: " << _hitPoints << std::endl;
	std::cout << "Energy points init: " << _energyPoints << std::endl;
	std::cout << "Attack damage init: " << _attackDamage << std::endl;
	std::cout << "+++++++++++++++++++++++++++++++++++++" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other): ClapTrap(other)
{
	*this = other;
}

ScavTrap::~ScavTrap()
{
	std::cout << SCAV_TYPE << getName() << " is destroyed" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other); // base
		// _name = other.getName();
		// _hitPoints = other.getHitPoints();
		// _energyPoints = other.getEnergyPoints();
		// _attackDamage = other.getAttackDamage();
	}
	return *this;
}

// member function

void ScavTrap::attack(const std::string &target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << SCAV_TYPE << _name << " attacks " << target << ", "\
		<< "causing " << _attackDamage << " point of damage" << std::endl;
		_energyPoints -= 1;
	}
	else
		std::cout << SCAV_TYPE << _name << " does have enough energy points" << std::endl;
}

void ScavTrap::guardGate()
{
	if (_energyPoints > 0 && _hitPoints > 0)
		std::cout << SCAV_TYPE << _name << " is now in Gate Keeper mode" << std::endl;
	else
		std::cout << SCAV_TYPE << _name << " does have enough energy points" << std::endl;
}

/*
If ClapTrap is a base class for multiple derived classes, use getters/setters (Solution 2) to maintain encapsulation.
If ScavTrap is tightly coupled to ClapTrap, and direct access is okay, use protected (Solution 1) for simplicity.
*/