/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalmich <vgalmich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 11:35:50 by vgalmich          #+#    #+#             */
/*   Updated: 2025/07/28 12:09:33 by vgalmich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// constructor par defaut
Zombie::Zombie(void)
{
}

Zombie::Zombie(std::string n) : _name(n)
{
}

Zombie::~Zombie()
{
    std::cout << this->_name << " is destroyed." << std::endl;
}

void Zombie::announce () const
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string& name)
{
    _name = name;
}

// difference entre allocation de N zombie et faire new zombie dans une boucle