/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalmich <vgalmich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 12:15:25 by vgalmich          #+#    #+#             */
/*   Updated: 2025/07/30 23:54:09 by vgalmich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	int	N = 8;
	std::string	name = "Hubert";
	
	Zombie* horde = zombieHorde(N, name);
	if (!horde)
	{
		std::cout << "Failed to create zombie horde." << std::endl;
		return (1);
	}
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}