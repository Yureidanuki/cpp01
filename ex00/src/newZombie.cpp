/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmid <cschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 14:23:03 by cschmid           #+#    #+#             */
/*   Updated: 2025/06/13 11:17:58 by cschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*NewZombie cette fonction cree un zombie, lui done un nom, et le retourne pour
qu'il puisse etre utilise en dehors de la portee de la fonction*/

Zombie* newZombie(std::string name)
{
	Zombie* new_zombie = new Zombie(name);
	return new_zombie;
}
