/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalmich <vgalmich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 19:19:22 by vgalmich          #+#    #+#             */
/*   Updated: 2025/07/29 19:58:10 by vgalmich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>
# include <sstream>

int main(int argc, char** argv)
{
    // check des arguments
    if (argc != 4)
    {
        std::cerr << "Error: wrong number of arguments" << std::endl;
        return (1);
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    // check si s1 est vide
    if (s1.empty())
    {
        std::cerr << "Error: s1 must not be empty." << std::endl;
        return (1);
    }
    // ouvrir le fichier original
    std::ifstream infile(filename.c_str());
    if (!infile)
    {
        std::cerr << "Error: failed open file " << filename << std::endl;
        return (1);
    }
    // lire le contenu du fichier
    std::stringstream buffer;
    buffer << infile.rdbuf();
    infile.close();
    // remplacer s1 par s2
    std::string result;
    size_t pos = 0;
    std::string content = buffer.str();
    while (true)
    {
        size_t found = content.find(s1, pos);
        if (found == std::string::npos) // si n'a pas ete trouve
        {
            result += content.substr(pos);
            break;
        }
    // si s1 a ete trouve
    result += content.substr(pos, found - pos); // found - pos longueur du morceau a garder tel quel
    result += s2;
    pos = found + s1.length();
    }
    // ecrire le contenu modifié dans result
    std::ofstream outfile((filename + ".replace").c_str());
    if (!outfile)
    {
        std::cerr << "Error: failed to create output file. " << filename << ".replace" << std::endl;
        return (1);
    }
    outfile << result;
    outfile.close();
    return (0);
}