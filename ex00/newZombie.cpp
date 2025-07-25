/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NewZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalmich <vgalmich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 00:51:13 by vgalmich          #+#    #+#             */
/*   Updated: 2025/07/26 00:51:13 by vgalmich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie* z = new Zombie(name); // alloue un zombie dynamiquement (sur la heap / le tas)
    return z; // retourne le pointeur vers le nouveau zombie
}