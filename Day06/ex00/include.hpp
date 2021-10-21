/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   include.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrahim <ibrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:37:43 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/21 01:27:21 by ibrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDE_HPP
# define INCLUDE_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string.h>

int ft_isdigit(int c);
int put_error(std::string str);
int	ft_isalpha(int c);
int parse_av(char *str, std::string v);

#endif