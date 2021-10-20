/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   include.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:37:43 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/20 19:29:59 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDE_HPP
# define INCLUDE_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>

int ft_isdigit(int c);
int put_error(std::string str);
int	ft_isalpha(int c);
int parse_av(char *str, std::string v);

#endif