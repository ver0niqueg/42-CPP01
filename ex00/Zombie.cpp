/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalmich <vgalmich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 11:35:27 by vgalmich          #+#    #+#             */
/*   Updated: 2025/07/28 11:35:27 by vgalmich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string n) : _name(n)
{
}

Zombie::~Zombie()
{
    std::cout << this->_name << " is destroyed." << std::endl;
}

void Zombie::announce () const
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
