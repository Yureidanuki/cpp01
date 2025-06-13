/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmid <cschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 10:47:16 by cschmid           #+#    #+#             */
/*   Updated: 2025/06/12 14:21:31 by cschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/*========== CONSTRUCTEUR ==========*/
Weapon::Weapon(const std::string &type){
	_type = type;
}

/*========== DESTRUCTEUR ==========*/
Weapon::~Weapon(){
}


/*========== GETTER ==========*/
const std::string &Weapon::getType() const{
	return (_type);
}

/*========== SETTER ==========*/
void Weapon::setType(const std::string &type){
	_type = type;
}
