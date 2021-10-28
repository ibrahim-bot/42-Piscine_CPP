/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:05:27 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/28 19:33:03 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
    private:
        ShrubberyCreationForm( );
        std::string _target;

    public:
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm const &);
        virtual ~ShrubberyCreationForm();
        
        void execute(Bureaucrat const & executor) const;
        
        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &);

};

#endif
