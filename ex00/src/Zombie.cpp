/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmid <cschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 14:21:35 by cschmid           #+#    #+#             */
/*   Updated: 2025/06/06 14:57:26 by cschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*-----------------CONSTRUCTEURS-----------------*/

Zombie::Zombie() {
}

Zombie::Zombie(std::string name) {
    _name = name;
}

/*-----------------DESTRUCTEUR-----------------*/

Zombie::~Zombie() {
    std::cout << _name << " is destroyed." << std::endl;
}

/*-----------------SETTER-----------------*/

void Zombie::setName(std::string name) {
    _name = name;
}

/*-----------------METHODE-----------------*/

void Zombie::announce() {
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
