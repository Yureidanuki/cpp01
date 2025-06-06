/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmid <cschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 14:18:35 by cschmid           #+#    #+#             */
/*   Updated: 2025/06/06 14:58:21 by cschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie* heapZombie;
    randomChump("Lola");

    heapZombie = newZombie("Bidule");
    heapZombie->announce();
    delete heapZombie;

    return 0;
}
