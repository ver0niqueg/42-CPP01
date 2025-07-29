/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalmich <vgalmich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 18:11:21 by vgalmich          #+#    #+#             */
/*   Updated: 2025/07/29 19:11:13 by vgalmich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
}

HumanB::HumanB(const std::string &name) : _name(name)
{
    _weaponPTR = NULL;
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &weapon)
{
    _weaponPTR = &weapon;
}

void HumanB::attack() const
{
    if (_weaponPTR)
    {
        std::cout << _name << " attacks with their " << _weaponPTR->getType() << std::endl;
    }
    else
    {
        std::cout << _name << " has no weapon" << std::endl;
}
}



