/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:13:02 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/28 19:24:30 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
    private:
        std::string _name;
        bool _sign;
        int _grade;
        int _exec;

    public:
        class GradeTooLowExecption : public std::exception
        {
            public:
                GradeTooLowExecption(/* args */);
                virtual ~GradeTooLowExecption() throw();

                virtual const char *what() const throw();
        };
        
        class GradeTooHighExeception : public std::exception
        {
            public:
                GradeTooHighExeception(/* args */);
                virtual ~GradeTooHighExeception() throw();

                virtual const char *what() const throw();
        };
        Form();
        Form(std::string name, int const grade, int const exec);
        Form( Form const &);
        virtual ~Form();

        Form &beSigned(Bureaucrat b);

        std::string getName(void) const;
        int         getSign(void) const;
        int         getGrade(void) const;
        int         getExec(void) const;

        virtual void execute(Bureaucrat const & executor) const = 0;

        Form &operator=(const Form &);
};

std::ostream &operator<<(std::ostream &, const Form &);

#endif