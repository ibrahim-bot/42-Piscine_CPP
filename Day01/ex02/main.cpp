/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 15:18:15 by ibrahim           #+#    #+#             */
/*   Updated: 2021/10/26 12:23:01 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string base = "HI THIS IS BRAIN";

    std::string *stringPTR = &base;
    std::string &stringREF = base;

    std::cout << "ADRESS BASE = " << &base << std::endl;    
    std::cout << "ADRESS PTR  = " << stringPTR << std::endl;
	std::cout << "ADRESS REF  = "<< &stringREF << std::endl;
    
    std::cout << std::endl << "STR BASE = " << base << std::endl;
	std::cout << "STR PTR  = " << *stringPTR << std::endl;
	std::cout << "STR REF  = " << stringREF << std::endl;
    return (0);
}