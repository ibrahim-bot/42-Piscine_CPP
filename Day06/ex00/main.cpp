/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:14:21 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/20 19:31:55 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.hpp"

void put_char(std::string av, double op, char *str)
{
    char c;

    if (strlen(str) == 1 && ft_isdigit(*str) == 0)
        c = *str;
    else 
        c = static_cast<char>(op);
    std::cout << "char: ";
    if (av == "nan" || av == "nanf" || av == "-inff" || av == "-inf" || av == "+inff" || av == "+inf")
    {
        std::cout << "impossible" << std::endl;
        return ;
    }
    if (!std::isprint(c))
    {
        std::cout << "Non displayable" << std::endl;
        return ;
    }
    std::cout << "'" << c << "'" << std::endl;
}

void put_int(std::string av, double op, char *str)
{
    int a;
 
    if (strlen(str) > 1 || ft_isdigit(*str) == 1)
        a = static_cast<int>(op);
    else
        a = *str;
    std::cout << "int: ";
    if (av == "nan" || av == "nanf" || av == "-inff" || av == "-inf" || av == "+inff" || av == "+inf")
    {
        std::cout << "impossible" << std::endl;
        return ;
    }
    std::cout << a << std::endl;
}

void put_float(double op, char *str)
{
    float c;

    if (strlen(str) > 1 || ft_isdigit(*str) == 1)
        c = static_cast<float>(op);
    else
        c = *str;
    std::cout << "float: ";
    std::cout << std::fixed << std::setprecision(1) << c;
    std::cout << "f" << std::endl;
}

void put_double(double op, char *str)
{
    double d; 

    if (strlen(str) > 1 || ft_isdigit(*str) == 1)
        d = static_cast<double>(op);
    else
        d = *str;
    std::cout << "double: ";
    std::cout << d << std::endl;
}


int main(int ac, char **av)
{
    std::string value;
    double op;

    if (ac != 2)
        return (put_error("Error: Add 1 argument or Use just one argument"));
    value = av[1];
    if (parse_av(av[1], value) == 1)
        return (put_error("Error: Value not accept"));

    op = atof(av[1]);
    put_char(value, op, av[1]);
    put_int(value, op, av[1]);
    put_float(op, av[1]);
    put_double(op, av[1]);
    return (0);
}