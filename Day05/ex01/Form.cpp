/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:12:38 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/27 19:43:45 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
{
    return ;
}

Form::Form(std::string name, int const grade, int const exec)
{
    this->_name = name;
    if (grade < 1)
        throw Form::GradeTooHighExeception();
    else if (grade > 150)
        throw Form::GradeTooLowExecption();
    else
        this->_grade = grade;
    if (exec < 1)
        throw Form::GradeTooHighExeception();
    else if (exec > 150)
        throw Form::GradeTooLowExecption();
    else
        this->_exec = exec;
    this->_sign = 0;
    return ;
}

Form::~Form()
{
    return ;
}

Form::GradeTooLowExecption::GradeTooLowExecption(/* args */)
{
}

Form::GradeTooLowExecption::~GradeTooLowExecption() throw()
{
}

const char *Form::GradeTooLowExecption::what() const throw()
{
    return ("Grade is too low...");
}

Form::GradeTooHighExeception::GradeTooHighExeception(/* args */)
{
}

Form::GradeTooHighExeception::~GradeTooHighExeception() throw()
{
}

const char *Form::GradeTooHighExeception::what() const throw()
{
    return ("Grade is too high...");
}

std::string Form::getName(void) const
{
    return (this->_name);
}

int Form::getSign() const
{
    return (this->_sign);
}

int Form::getGrade() const
{
    return (this->_grade);
}

int Form::getExec() const
{
    return (this->_exec);
}

Form Form::beSigned(Bureaucrat master)
{
    if (master.getGrade() <= this->getGrade())
    {
        this->_sign = 1;
        master.signForm(1, *this);
    }
    else
    {
        master.signForm(0, *this);
        throw Form::GradeTooLowExecption();
    }
    return (*this);
}

Form &Form::operator=(const Form &rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_sign = rhs._sign;
    }
    return (*this);
}

std::ostream &operator<<(std::ostream &out, const Form &rhs)
{
    out << "The " << rhs.getName() << " Form is ";
    if (rhs.getSign() == 0)
        out << "not signed,";
    else 
        out <<  "signed,";
    out << " The grade to sign it must be greater than or equal to ";
    out << rhs.getGrade();
    out << " and his Grade for execute must be greater than or equal to ";
    out << rhs.getExec();
    out << std::endl;
    return (out);
}