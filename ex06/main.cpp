/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalmich <vgalmich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 20:00:27 by vgalmich          #+#    #+#             */
/*   Updated: 2025/07/30 15:40:12 by vgalmich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int main(int argc, char** argv)
{
    Harl harl; // instance
    if (argc != 2)
    {
        std::cerr << "Error: wrong number of arguments" << std::endl;
        return (1);
    }
    harl.complainFilter(argv[1]);
    return (0);
}