/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalmich <vgalmich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 18:09:04 by vgalmich          #+#    #+#             */
/*   Updated: 2025/07/29 18:37:52 by vgalmich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

// par reference

class HumanA
{
    private:
        std::string _name;
        Weapon& _weapon;

    public:
        HumanA(const std::string &name, Weapon &weapon);
        ~HumanA();
        void attack() const;
};

#endif