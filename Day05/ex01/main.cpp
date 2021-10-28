/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 21:15:25 by ibrahim           #+#    #+#             */
/*   Updated: 2021/10/27 20:15:02 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat jiji("JIJI", 2);
        Form nuit("NUIT", 50, 20);
        
        std::cout << nuit;
        nuit.beSigned(jiji);
        std::cout << nuit;

        Bureaucrat test("TEST", 50);
        Form blop("BLOP", 40, 30);
        
        std::cout << std::endl;
        blop.beSigned(test);
        std::cout << blop;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
} 