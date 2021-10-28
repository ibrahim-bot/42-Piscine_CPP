/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:25:05 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/28 19:28:41 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialForm", 25, 5)
{
    this->_target = target;
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy)
{
    *this = copy;
    return ;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    return ;
}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->getSign() == 0 || executor.getGrade() > this->getExec())
        throw Bureaucrat::GradeTooLowException();
    std::cout << this->_target << " été pardonnée par Zafod Beeblebrox." << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
    this->_target = rhs._target;
    return *this;
}