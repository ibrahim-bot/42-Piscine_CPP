/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 12:13:02 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/27 19:09:14 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
    private:
        Form();
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
        Form(std::string const name, int const grade, int exec);
        virtual ~Form();

        std::string getName(void) const;
        int         getSign(void) const;
        int         getGrade(void) const;
        int         getExec(void) const;

        Form beSigned(Bureaucrat b);

        Form &operator=(const Form &);
};

std::ostream &operator<<(std::ostream &, const Form &);

#endif