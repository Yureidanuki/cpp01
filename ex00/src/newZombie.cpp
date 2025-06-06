/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmid <cschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 14:23:03 by cschmid           #+#    #+#             */
/*   Updated: 2025/06/06 14:52:51 by cschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*NewZombie cette fonction cree un zombie, lui done un nom, et le retourne pour 
qu'il puisse etre utilise en dehors de la portee de la fonction*/

Zombie* newZombie(std::string name) {
    return new Zombie(name);
}
