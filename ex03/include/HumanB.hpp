/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 13:03:33 by amakela           #+#    #+#             */
/*   Updated: 2024/08/07 14:18:57 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
	private:
		std::string	name;
		Weapon*		weapon;
		
	public:
		HumanB(std::string name);

		void	attack();
		void	setWeapon(Weapon& weapon);
};

#endif
