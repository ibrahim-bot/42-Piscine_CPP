/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:50:39 by ichougra          #+#    #+#             */
/*   Updated: 2021/03/19 10:42:02 by ichougra         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <string>
# include <iostream>

class Pony
{
    private:
        std::string _name;
        std::string _color;
        std::string _age;

    public:
        Pony();
        ~Pony();
        static void    ponyOnTheHeap(std::string name, std::string color, std::string age);
        static void    ponyOnTheStack(std::string name, std::string color, std::string age);
};

#endif