/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:48:29 by ichougra          #+#    #+#             */
/*   Updated: 2021/03/19 10:45:09 by ichougra         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int main()
{
    Pony::ponyOnTheStack("Ecalir", "ROUGE", "722");
    
    Pony::ponyOnTheHeap("tornade", "Brun", "20");
    
    return (0);
}