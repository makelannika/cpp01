/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 14:57:41 by amakela           #+#    #+#             */
/*   Updated: 2024/08/06 16:03:22 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

Weapon::Weapon() {
    
}

Weapon::Weapon(std::string type)
{
    this->type = type;
}

const std::string& Weapon::getType()
{
    return (type);
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}
