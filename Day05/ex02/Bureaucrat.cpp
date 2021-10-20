/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 21:16:00 by ibrahim           #+#    #+#             */
/*   Updated: 2021/10/20 11:37:48 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(/* args */)
{
    this->_name = "none";
    this->_grade = 1;
    return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
    *this = src;
    return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
    {
      this->_name = name;
      this->_grade = grade;
    }
    return ;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void)
{
    return ;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw()
{
    return ;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade is too low...");
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void)
{
    return ;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw()
{
    return ;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade is too high...");
}

std::string Bureaucrat::getName(void) const
{
    return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
    return (this->_grade);
}

void Bureaucrat::decrementGrade(void)
{
    if (this->_grade >= 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade += 1;
    return ;
}

void Bureaucrat::incrementGrade(void)
{
    if (this->_grade <= 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade -= 1;
    return ;
}

Bureaucrat::~Bureaucrat()
{
    return ;
}

void Bureaucrat::signForm(int form, Form &f) const
{
    if (form == 1)
        std::cout << this->getName() << " signs " << f.getName() << std::endl;
    else
        std::cout << this->getName() << " cannot signs because " << f.getGrade() << std::endl;
}

void Bureaucrat::executeForm(Form const &form) const
{
    try
    {
        form.execute(*this);
        std::cout << this->getName() << " executs " << form.getName() << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "Error: Form not sign or Bureaucrate not grade for execute" << std::endl;
    }   
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_grade = rhs._grade;
    }
    return (*this);
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &rhs)
{
    out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
    return (out);
}