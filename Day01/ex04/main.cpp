/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrahim <ibrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 16:27:29 by ibrahim           #+#    #+#             */
/*   Updated: 2021/09/24 16:54:00 by ibrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int verif_space(std::string s1)
{
    int i = -1;

    while (s1[++i])
    {
        if (s1[i] != ' ')
            return (0);
    }
        
    return (1);
}

int main(int ac, char **av)
{
    std::string Filename;
    std::string output;
    std::string buffer;
    std::string s1;
    std::string s2;
   
    if (ac != 4)
    {
        std::cerr << "Error: ./replace (filename) (s1) (s2)" << std::endl;
        return (1);
    }
    Filename = av[1];
    s1 = av[2];
    s2 = av[3];
    if (Filename.empty() == true || s1.empty() == true || s2.empty() == true
    || verif_space(s1) == 1 || verif_space(s2) == 1 || verif_space(Filename) == 1)
	{
		std::cerr << "Error: A files is empty" << std::endl;
		return (1);
	}
    output = Filename + ".replace";
    std::ifstream read(av[1]);
    if (read.fail())
    {
        std::cout << "Error: Opening file" << std::endl;
        return (1);
    }
    std::ofstream out("filename.replace");
    if (out.fail())
    {
        std::cout << "Error: creating file" << std::endl;
        return (1);
    }
    while (std::getline(read, buffer))
    {

        while (buffer.find(s1) != std::string::npos)
        {
            buffer.replace(buffer.find(s1), s1.length(), s2);
        }
        
        out << buffer;
        out << std::endl;
    }


    
    if (buffer == "")
    {
        out << std::endl;
    }
    read.close();
    out.close();
    
    return (0);
}