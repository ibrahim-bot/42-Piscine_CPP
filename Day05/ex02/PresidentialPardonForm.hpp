/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:24:02 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/28 19:26:31 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    private:
        PresidentialPardonForm();
        std::string _target;

    public:
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm const &);
        virtual ~PresidentialPardonForm();

        void execute(Bureaucrat const & executor) const;

        PresidentialPardonForm & operator=(PresidentialPardonForm const &);
};


#endif