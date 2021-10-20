/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:25:05 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/20 12:29:16 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialForm", 25, 5)
{
    this->_target = target;
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