/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cschmid <cschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 10:38:35 by cschmid           #+#    #+#             */
/*   Updated: 2025/06/13 11:00:04 by cschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/*========= Constructeur ==========*/

Harl::Harl(void){
}

/*========== Destructeur ==========*/

Harl::~Harl(void){
}

/*========== Methodes ==========*/

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << RED << BOLD <<"[ DEBUG ]\n" << GREEN
	          << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
	          << RESET<< std::endl;
}

void Harl::info(void)
{
	std::cout << RED << BOLD << "[ INFO ]\n" << GREEN
	          << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! "
	          << "If you did, I wouldn’t be asking for more!"
	          << std::endl;
}

void Harl::warning(void)
{
	std::cout << RED << BOLD << "[ WARNING ]\n" << GREEN
	          << "I think I deserve to have some extra bacon for free. "
	          << "I’ve been coming for years, whereas you started working here just last month."
	          << std::endl;
}

void Harl::error(void)
{
	std::cout << RED << BOLD << "[ ERROR ]\n" << GREEN
	          << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*methods[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	for (int i = 0; i < 4; ++i)
	{
		if (level == levels[i])
		{
			(this->*methods[i])();
			return;
		}
	}
}
