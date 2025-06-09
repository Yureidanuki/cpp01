/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chloe <chloe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 19:09:26 by chloe             #+#    #+#             */
/*   Updated: 2025/06/09 19:09:29 by chloe            ###   ########.fr       */
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
