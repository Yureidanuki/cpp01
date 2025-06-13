/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmid <cschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 09:32:17 by cschmid           #+#    #+#             */
/*   Updated: 2025/06/13 11:34:55 by cschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string brain = "HI THIS IS BRAIN";
    
	// Un pointeur vers la variable brain
	std::string *stringPTR = &brain;
    
	// Une référence vers la variable brain
	std::string &stringREF = brain;
    
	// Affichage des adresses
	std::cout << "Adresse de la variable brain       : " << &brain << std::endl;
	std::cout << "Adresse contenue dans stringPTR    : " << stringPTR << std::endl;
	std::cout << "Adresse de la référence stringREF  : " << &stringREF << std::endl;
	std::cout << std::endl;
    
	// Affichage des valeurs
	std::cout << "Valeur de la variable brain        : " << brain << std::endl;
	std::cout << "Valeur pointée par stringPTR       : " << *stringPTR << std::endl;
	std::cout << "Valeur référencée par stringREF    : " << stringREF << std::endl;
	
	return (0);
}
