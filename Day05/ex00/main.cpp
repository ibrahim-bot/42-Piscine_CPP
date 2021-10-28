/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 21:15:25 by ibrahim           #+#    #+#             */
/*   Updated: 2021/10/27 19:16:33 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat op("jiji", 2);
        
        std::cout << op  << std::endl;
        op.incrementGrade();
        std::cout << op  << std::endl;
        op.decrementGrade();
        op.decrementGrade();
        std::cout << op  << std::endl;   
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}