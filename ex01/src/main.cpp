/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chloe <chloe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 19:12:59 by chloe             #+#    #+#             */
/*   Updated: 2025/06/09 19:24:40 by chloe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main()
{
    int N = 5;
    Zombie *horde = zombieHorde(N, "Zorg");

    for (int i = 0; i < N; ++i)
    {
        horde[i].announce();
    }

    delete[] horde;
    return 0;
}
