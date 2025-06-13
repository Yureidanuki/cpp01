/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmid <cschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 14:18:35 by cschmid           #+#    #+#             */
/*   Updated: 2025/06/13 11:22:17 by cschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int main()
{
    Zombie* Zombie;
    randomChump("Lola");

    Zombie = newZombie("Bidule");
    Zombie->announce();
    delete Zombie;

    return 0;
}
