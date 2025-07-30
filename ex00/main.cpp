/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalmich <vgalmich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 01:05:09 by vgalmich          #+#    #+#             */
/*   Updated: 2025/07/26 01:05:09 by vgalmich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie*	z1 = newZombie("Rick");

	randomChump("Daryl");

	z1->announce();
	delete z1;
	return (0);
}