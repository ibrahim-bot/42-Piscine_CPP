/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 21:16:09 by ibrahim           #+#    #+#             */
/*   Updated: 2021/10/20 11:27:45 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Form;
class Bureaucrat
{
    private:
        int         _grade;
        std::string _name;

    public:
        class GradeTooLowException : public std::exception
        {
            public:
                GradeTooLowException(void);
                virtual ~GradeTooLowException(void) throw();

                virtual const char *what() const throw();

        };

        class GradeTooHighException : public std::exception
        {
            public:
                GradeTooHighException(void);
                virtual ~GradeTooHighException(void) throw();

                virtual const char *what() const throw();
        };
        Bureaucrat(void);
        Bureaucrat(std::string const name, int grade);
        Bureaucrat(const Bureaucrat &);
        virtual ~Bureaucrat(void);

        void incrementGrade(void);
        void decrementGrade(void);

        int         getGrade(void) const;
        std::string getName(void) const;
        
        void    signForm(int , Form &) const;
        void    executeForm(Form const &form) const;
        
        Bureaucrat  &operator=(const Bureaucrat &);
};

std::ostream &operator<<(std::ostream &, const Bureaucrat &);

#endif