/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:04:58 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/28 19:32:09 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyForm", 145, 137)
{
    this->_target = target;
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy)
{
    *this = copy;
    return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    return ;
}

void draw_arbre(std::string name)
{
    std::ofstream fichier(name + "_shrubbery", std::ios::out);
        
    if (fichier)
    {
        fichier << "\n\n🌤\n ";
        fichier << "  ooxoxoo    ooxoo          ooxoxoo    ooxoo\n";
        fichier << " ooxoxo oo  oxoxooo        ooxoxo oo  oxoxooo\n";
        fichier << "oooo xxoxoo ooo ooox      oooo xxoxoo ooo ooox\n";
        fichier << "oxo o oxoxo  xoxxoxo      oxo o oxoxo  xoxxoxo\n";
        fichier << " oxo xooxoooo o ooo        oxo xooxoooo o ooo\n";
        fichier << "   ooo\\oo\\  /o/o             ooo\\oo\\  /o/o\n";
        fichier << "       \\  \\/ /                   \\  \\/ /\n";
        fichier << "        |   /                     |   /\n";
        fichier << "        |  |                      |  |\n";
        fichier << "        | O|                      | O|\n";
        fichier << "        |  |                      |  |\n";
        fichier << "        |  |                      |  |\n";
        fichier << "_______/    \\____🐷🐖__🐷🐖________/   \\______\n";
        fichier.close();
    }
    else 
        std::cerr << "Erreur à l'ouverture !" << std::endl;
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->getSign() == 0 || executor.getGrade() > this->getExec())
        throw Bureaucrat::GradeTooLowException();
    draw_arbre(this->_target);
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
    this->_target = rhs._target;
    return *this;
}