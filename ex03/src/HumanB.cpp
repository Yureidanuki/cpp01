/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmid <cschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 10:47:10 by cschmid           #+#    #+#             */
/*   Updated: 2025/06/12 14:21:35 by cschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

/*========== CONSTRUCTEUR ==========*/
HumanB::HumanB(const std::string &name)
{
	_name = name;
	_weapon = NULL;
}

/*========== DESTRUCTEUR ==========*/
HumanB::~HumanB(){
}

/*========== METHODE ==========*/
void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void HumanB::attack() const
{
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " has no weapon to attack with!" << std::endl;
}
