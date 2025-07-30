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

	randomChump("Daryl"); // → zombie créé sur la pile (stack), annonce immédiate, destruction automatique.

	z1->announce(); // → on fait annoncer le zombie créé dynamiquement.
	delete z1; // → on libère la mémoire
	return (0);
}