/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmid <cschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 10:41:19 by cschmid           #+#    #+#             */
/*   Updated: 2025/06/13 11:00:47 by cschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

int main()
{
	Harl harl;

	harl.complain("DEBUG");
	std::cout << std::endl;

	harl.complain("INFO");
	std::cout << std::endl;

	harl.complain("WARNING");
	std::cout << std::endl;

	harl.complain("ERROR");
	std::cout << std::endl;

	harl.complain("INVALID");

	return 0;
}
