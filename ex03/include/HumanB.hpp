/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 13:03:33 by amakela           #+#    #+#             */
/*   Updated: 2024/09/04 14:02:05 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB {
	private:
		std::string	name;
		Weapon*		weapon;
		
	public:
		HumanB( std::string name );
		~HumanB();

		void	attack();
		void	setWeapon( Weapon& weapon );
};

#endif
