/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmid <cschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 14:23:28 by cschmid           #+#    #+#             */
/*   Updated: 2025/06/06 14:53:07 by cschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*Cette fonction cree un zombie, lui donne un nom et le fait s'annoncer immediatement*/

void randomChump(std::string name) {
    Zombie zombie(name);
    zombie.announce();
}