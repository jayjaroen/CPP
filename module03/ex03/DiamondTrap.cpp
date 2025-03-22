/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 20:12:01 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/22 13:49:30 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FragTrap()
{
	_name = "";
	_hitPoints = Diamond_HP;
	_energyPoints = Diamond_ENERGY;
	_attackDamage = Diamond_ATTACK;
	
	std::cout << "+++++++++++++++++++++++++++++++++++++" << std::endl;
	std::cout << "DiamondTrap: Default Constructor Called" << std::endl;
	std::cout << Diamond_TYPE << _name << " is created" << std::endl;
	std::cout << "Hit points init: " << _hitPoints << std::endl;
	std::cout << "Energy points init: " << _energyPoints << std::endl;
	std::cout << "Attack damage init: " << _attackDamage << std::endl;
	std::cout << "+++++++++++++++++++++++++++++++++++++" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << Diamond_TYPE << _name << " is destroyed" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name): ClapTrap(name + ".ClapTrap"), ScavTrap(name + ".ScavTrap"), FragTrap(name + ".FragTrap")
{
	_name = name;
	_hitPoints = Diamond_HP;
	_energyPoints = Diamond_ENERGY;
	_attackDamage = Diamond_ATTACK;
	
	std::cout << "+++++++++++++++++++++++++++++++++++++" << std::endl;
	std::cout << "DiamondTrap: Parameters Constructor Called" << std::endl;
	std::cout << Diamond_TYPE << _name << " is created" << std::endl;
	std::cout << "Hit points init: " << _hitPoints << std::endl;
	std::cout << "Energy points init: " << _energyPoints << std::endl;
	std::cout << "Attack damage init: " << _attackDamage << std::endl;
	std::cout << "+++++++++++++++++++++++++++++++++++++" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &other): ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = other;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const &other)
{
	std::cout << "DiamondTrap operator assignment called" << std::endl;
	if (this != &other)
	{
		_name = other.getName();
		_hitPoints = other.getHitPoints();
		_energyPoints = other.getEnergyPoints();
		_attackDamage = other.getAttackDamage();
	}
	return *this;
}

std::string DiamondTrap::getName() const
{
	return _name;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "I am " << Diamond_TYPE << _name << std::endl;
	std::cout << "I am ClapTrap && my name is " << ClapTrap::getName() << std::endl;
}