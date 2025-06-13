/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmid <cschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 10:47:07 by cschmid           #+#    #+#             */
/*   Updated: 2025/06/12 14:21:38 by cschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

/*========== CONSTRUCTEUR ==========*/

HumanA::HumanA(const std::string &name, Weapon &weapon)
	: _name(name), _weapon(weapon){
}

/*========== DESTRUCTEUR ==========*/

HumanA::~HumanA(){
}

/*========== METHODE ==========*/

void HumanA::attack() const{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
