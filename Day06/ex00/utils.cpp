/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrahim <ibrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:37:13 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/21 01:29:56 by ibrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.hpp"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int put_error(std::string str)
{
    std::cerr << str << std::endl;
    return (1);
}

int parse_av(char *str, std::string v)
{
    int i = 0;

    while (str[i])
    {
        if (ft_isdigit(str[i]) == 1 && ft_isdigit(str[i + 1]) == 0 && str[i + 1] != '\0'
        && str[i + 1] != '.' && str[strlen(str) - 1] != 'f')
            return (1);
        if (ft_isalpha(str[i]) == 1 && ft_isalpha(str[i + 1]) == 1 
		&& v != "nan" && v != "nanf" && v != "-inff" && v != "-inf" && v != "+inff" && v != "+inf")
			return (1);
        if (ft_isalpha(str[i]) == 1 && ft_isdigit(str[i + 1]) == 1)
            return (1);
        i++;
    }
    return (0);
}

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
