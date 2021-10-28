/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:17:44 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/28 19:30:58 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <stdlib.h>
#include <time.h>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyForm", 72, 45)
{
    this->_target = target;
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy)
{
    *this = copy;
    return ;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    return ;
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->getSign() == 0 || executor.getGrade() > this->getExec())
        throw Bureaucrat::GradeTooLowException();
    std::cout << "Bzzz Bzzz Bzzzz" << std::endl;
    std::cout << this->_target;
    srand(time(NULL));
    int x = rand() % 2 + 1;
    if (x == 1)
        std::cout << " a bien été robotizé" << std::endl;
    else
        std::cout << " echec de la robotization" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
    this->_target = rhs._target;
    return *this;
}