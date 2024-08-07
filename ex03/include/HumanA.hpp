/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:03:51 by amakela           #+#    #+#             */
/*   Updated: 2024/08/07 13:01:15 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class   HumanA
{
    private:
        std::string name;
        Weapon&		weapon;

    public:
        HumanA(std::string name, Weapon &weapon);
		
        void    attack();
};

#endif
