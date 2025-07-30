/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalmich <vgalmich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 11:35:35 by vgalmich          #+#    #+#             */
/*   Updated: 2025/07/28 11:35:35 by vgalmich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class	Zombie
{
	private:
		std::string _name;
		
	public:
		Zombie(std::string n);
		~Zombie();
		void announce() const;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);
#endif

