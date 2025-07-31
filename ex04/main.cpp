/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgalmich <vgalmich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 19:19:22 by vgalmich          #+#    #+#             */
/*   Updated: 2025/07/31 02:04:30 by vgalmich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>
# include <sstream>

std::string replaceInString(std::string const& content, std::string const& s1, std::string const& s2)
{
	std::string result;
	size_t pos = 0;
	while (true)
	{
		size_t found = content.find(s1, pos);
		if (found == std::string::npos)
		{
			result += content.substr(pos);
			break;
		}
		result += content.substr(pos, found - pos);
		result += s2;
		pos = found + s1.length();
	}
	return result;
}

int main(int argc, char** argv)
{
	if (argc != 4)
	{
		std::cerr << "Error: wrong number of arguments" << std::endl;
		return (1);
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (s1.empty())
	{
		std::cerr << "Error: s1 must not be empty." << std::endl;
		return (1);
	}
	std::ifstream infile(filename.c_str());
	if (!infile)
	{
		std::cerr << "Error: failed to open file " << filename << std::endl;
		return (1);
	}
	std::stringstream buffer;
	buffer << infile.rdbuf();
	infile.close();
	std::string content = buffer.str();
	std::string result = replaceInString(content, s1, s2);
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