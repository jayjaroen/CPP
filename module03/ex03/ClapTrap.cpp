/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:55:29 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/22 12:24:08 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():_name(""), _hitPoints(Clap_HP), _energyPoints(Clap_ENERGY),\
	_attackDamage(Clap_ATTACK)
{
	std::cout << "+++++++++++++++++++++++++++++++++++++" << std::endl;
	std::cout << "ClapTrap: Default Constructor Called" << std::endl;
	std::cout << "ClapTrap " << _name << " is created" << std::endl;
	std::cout << "Hit points init: " << _hitPoints << std::endl;
	std::cout << "Energy points init: " << _energyPoints << std::endl;
	std::cout << "Attack damage init: " << _attackDamage << std::endl;
	std::cout << "+++++++++++++++++++++++++++++++++++++" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(Clap_HP),\
	_energyPoints(Clap_ENERGY), _attackDamage(Clap_ATTACK)
{
	std::cout << "+++++++++++++++++++++++++++++++++++++" << std::endl;
	std::cout << "ClapTrap: Parameter Constructor Called" << std::endl;
	std::cout << "ClapTrap " << _name << " is created" << std::endl;
	std::cout << "Hit points init: " << _hitPoints << std::endl;
	std::cout << "Energy points init: " << _energyPoints << std::endl;
	std::cout << "Attack damage init: " << _attackDamage << std::endl;
	std::cout << "+++++++++++++++++++++++++++++++++++++" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	// call operator=
}

ClapTrap::~ClapTrap()
{
	std::cout << Clap_TYPE << _name << " was destroyed" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &other)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &other)
	{
        _name = other.getName();
		_hitPoints = other.getHitPoints();
		_energyPoints = other.getEnergyPoints();
		_attackDamage = other.getAttackDamage();
	}
	return (*this);
}

//////////// Getter && Setter ///////////
unsigned int ClapTrap::getAttackDamage() const
{
	return _attackDamage;
}

unsigned int ClapTrap::getEnergyPoints() const
{
	return _energyPoints;
}

unsigned int ClapTrap::getHitPoints() const
{
	return _hitPoints;
}

std::string ClapTrap::getName() const
{
	return _name;
}


//////////////////// Member Functions //////////////////////////

void ClapTrap::attack(const std::string &target) // the target is not yet created as other claptrap
{
	if (_energyPoints > 0 && _hitPoints > 0) // _hitPoints of the target
	{
		_energyPoints -= 1;
		std::cout << Clap_TYPE << _name << " attacks " << target << ", "\
		<< "causing " << _attackDamage << " point of damage" << std::endl; // present the accommulated points of attack damage?
	}
	else
	std::cout << Clap_TYPE << _name << " does have enough energy points" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) 
{
	if ((int)amount < 0) // is it necessary, input error function?
    {
		std::cout << "takeDamage: Invalid argument: Only positive value is allowed" << std::endl;
		return ;
	}
		// std::cout << "the value of amount is: " << (int) amount << std::endl;
	if (_hitPoints == 0)
	{
		std::cout << Clap_TYPE << _name << "is dead !!" << std::endl;
	}
	else if (amount > _hitPoints)
	{
		std::cout << Clap_TYPE << _name << " is hit by " << (int) amount \
		<< " hit points and died!" << std::endl;
		_hitPoints = 0;
	}
	else
	{
		std::cout << Clap_TYPE << _name << " is hit by " << amount << " hit points" << std::endl;
		_hitPoints -= amount;
	}
}
	
void ClapTrap::beRepaired(unsigned int amount)
{
	if ((int)amount < 0)
	{
		std::cout << "beRepaired: Invalid argument: Only positive value is allowed" << std::endl;
		return ;
	}
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << Clap_TYPE << _name << " is repairing and has got " << amount << "hit points" << std::endl;
		_hitPoints += amount;
		_energyPoints -= 1;
	}
	else
	{
		std::cout << Clap_TYPE << _name << " is dead and can't be repaired" << std::endl;
	}
}

// void	ClapTrap::setHitPoints(unsigned int points)
// {
//     if ((int)points < 0)
//     {
//         std::cout << "setHitPoints: Invalid arguments: Only positive value is allowed" << std::endl;
//         return ;
//     }
// 	_hitPoints = points;
// }

// void	ClapTrap::setEnergyPoints(unsigned int points)
// {
//     if ((int)points < 0)
//     {
//         std::cout << "setEnergyPoints: Invalid arguments: Only positive value is allowed" << std::endl;
//         return ;
//     }
// 	_energyPoints = points;
// }

// void	ClapTrap::setAttackDamage(unsigned int points)
// {
//     if ((int)points < 0)
//     {
//         std::cout << "setAttackDamage: Invalid arguments: Only positive value is allowed" << std::endl;
//         return ;
//     }
// 	_attackDamage = points;
// }

// void ClapTrap::setName(std::string name)
// {
//     _name = name;
// }