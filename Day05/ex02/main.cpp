/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 21:15:25 by ibrahim           #+#    #+#             */
/*   Updated: 2021/10/27 20:18:45 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try 
    {
        Bureaucrat bb("BOSS", 30);
        // Bureaucrat oui("EIE", 138);
        // ShrubberyCreationForm non("WE");

        // oui.executeForm(non);
        
        // non.beSigned(oui);
        // oui.executeForm(non);
        
        // oui.incrementGrade();
        // oui.executeForm(non);

        
        // RobotomyRequestForm robot("Joru");

        // std::cout << std::endl;
        
        // oui.executeForm(robot);
        // bb.executeForm(robot);

        // robot.beSigned(bb);
        // bb.executeForm(robot);

        // PresidentialPardonForm lop("werty");

        //std::cout << std::endl;
        
        // bb.executeForm(lop);

        // lop.beSigned(bb);
        // bb.executeForm(lop);
    }
    catch (const std::exception& e)
    {
         std::cerr << e.what() << '\n';
    }
    return (0);
}
