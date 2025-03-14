/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 14:25:15 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/14 14:57:43 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	_name = "";
	_hitPoints = FRAG_HP;
	_energyPoints = FRAG_ENERGY;
	_attackDamage = FRAG_ATTACK;
	std::cout << "FragTrap: Default Constructor Called" << std::endl;
	std::cout << FRAG_TYPE << _name << " is created" << std::endl;
	std::cout << "Hit points init: " << _hitPoints << std::endl;
	std::cout << "Energy points init: " << _energyPoints << std::endl;
	std::cout << "Attack damage init: " << _attackDamage << std::endl;
}

FragTrap::FragTrap(const std::string name)
{
	_name = name;
	_hitPoints = FRAG_HP;
	_energyPoints = FRAG_ENERGY;
	_attackDamage = FRAG_ATTACK;
	std::cout << "FragTrap: Parameter Constructor Called" << std::endl;
	std::cout << FRAG_TYPE << _name << " is created" << std::endl;
	std::cout << "Hit points init: " << _hitPoints << std::endl;
	std::cout << "Energy points init: " << _energyPoints << std::endl;
	std::cout << "Attack damage init: " << _attackDamage << std::endl;
}

FragTrap::FragTrap(FragTrap const &other): ClapTrap(other)
{
	std::cout << "FragTrap: Copy Constructor Called" << std::endl;
	std::cout << "1" << std::endl;
	*this = other;
	// call operator=
}

FragTrap::~FragTrap()
{
	std::cout << FRAG_TYPE << getName() << " is destroyed" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const &other)
{
	std::cout << "2" << std::endl;
	if (this != &other)
	{
		_name = other.getName();
		_hitPoints = other.getHitPoints();
		_energyPoints = other.getEnergyPoints();
		_attackDamage = other.getAttackDamage();
	}
	return *this;
}

void FragTrap::attack(const std::string &target)
{
	if (_energyPoints > 0 && _hitPoints > 0) // _hitPoints of the target // _hitPoints > _energyPoints?
	{
		std::cout << FRAG_TYPE << _name << " attacks " << target << ", "\
		<< "causing " << _attackDamage << " point of damage" << std::endl; // present the accommulated points of attack damage?
		_energyPoints -= 1;
	}
	else
		std::cout << FRAG_TYPE << _name << " does have enough energy points" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << FRAG_TYPE << _name << "is giving high fives!" << std::endl;
}
