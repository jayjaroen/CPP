/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:55:29 by jjaroens          #+#    #+#             */
/*   Updated: 2025/03/07 22:22:43 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(ClapTrap const &other)
{
    // std::cout << "Copy constructor called" << std::endl;
    // *this = other;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10),\
            _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << _name << " is created" << std::endl \
    << "Hit points init: " << _hitPoints << std::endl << "Energy points init: " \
    << _energyPoints << std::endl << "Attack damage init: " << _attackDamage \
    << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " was destroyed" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &other)
{
    std::cout << "Assignment operator called" << std::endl;
    if (this != &other)
    {
        _hitPoints = other.getHitPoints();
        _energyPoints = other.getEnergyPoints();
        _attackDamage = other.getAttackDamage();
    }
    return (*this);
}

int ClapTrap::getAttackDamage() const
{
    return _attackDamage;
}

int ClapTrap::getEnergyPoints() const
{
    return _energyPoints;
}

int ClapTrap::getHitPoints() const
{
    return _hitPoints;
}

void	ClapTrap::setHitPoints(int points)
{
	_hitPoints = points;
}

void	ClapTrap::setEnergyPoints(int points)
{
	_energyPoints = points;
}

void	ClapTrap::setAttackDamage(int points)
{
    _attackDamage = points;
}

void ClapTrap::attack(const std::string &target) // the target is not yet created as other claptrap
{
	if (_energyPoints > 0) // _hitPoints of the target
	{
		_energyPoints -= 1;
		_attackDamage += 1; // increment the point of attack damage (or not?)
    	std::cout << "ClapTrap " << _name << " attacks " << target << ", "\
        	<< "causing " << _attackDamage << " point of damage" << std::endl; // present the accommulated points of attack damage?
	}
	else
		std::cout << "ClapTrap " << _name << " does have enough energy points" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) 
{
	std::cout << "ClapTrap " << _name << " is hit by " << amount << "hit points" << std::endl;
	_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)// also decreased in energy points?
{
	std::cout << "ClapTrap " << _name << " is repairing and has got " << amount << "hit points" << std::endl;
	_hitPoints += amount;
	_energyPoints -= 1;
}