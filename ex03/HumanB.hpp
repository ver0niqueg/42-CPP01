/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalmich <vgalmich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 18:09:33 by vgalmich          #+#    #+#             */
/*   Updated: 2025/07/31 01:24:14 by vgalmich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB
{
    private:
        std::string _name;
        Weapon* _weaponPTR;
    public:
        HumanB();
        HumanB(const std::string &name);
        ~HumanB();
        void setWeapon(Weapon &weapon);
        void attack() const;
};

#endif