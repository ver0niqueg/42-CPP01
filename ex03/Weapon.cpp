/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalmich <vgalmich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 14:59:12 by vgalmich          #+#    #+#             */
/*   Updated: 2025/07/28 18:08:27 by vgalmich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
}
Weapon::Weapon(std::string t) : _type(t)
{
}

Weapon::~Weapon(void)
{
}

const std::string& Weapon::getType(void) const
{
    return this->_type;
}

void Weapon::setType(const std::string& t)
{
    this->_type = t;
}
// in which case it is better to use a pointer to Weapon? And a reference to Weapon ?