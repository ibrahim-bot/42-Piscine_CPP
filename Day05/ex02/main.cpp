/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 21:15:25 by ibrahim           #+#    #+#             */
/*   Updated: 2021/10/28 19:22:32 by ichougra         ###   ########.fr       */
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
        Bureaucrat boss("BOSS", 1);
        
        ShrubberyCreationForm shrub("WE");


        // boss.executeForm(shrub); // Error not sign Form
        
        shrub.beSigned(boss);      // shrub demande a boss pour etre signe
        boss.executeForm(shrub);   // execute car form signer
        
        
        // RobotomyRequestForm robot("Joru");
        
        // robot.beSigned(boss);
        // boss.executeForm(robot);

        // PresidentialPardonForm lop("werty");
        
        // lop.beSigned(boss);
        // boss.executeForm(lop);
    }
    catch (const std::exception& e)
    {
         std::cerr << e.what() << '\n';
    }
    return (0);
}
