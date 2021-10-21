/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrahim <ibrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 01:25:21 by ibrahim           #+#    #+#             */
/*   Updated: 2021/10/21 01:58:54 by ibrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>

struct Data
{
    int nb;
    std::string str;
};

uintptr_t serialize(Data* ptr)
{
    uintptr_t ser = reinterpret_cast<intptr_t>(ptr);
    
    return(ser);
}

Data* deserialize(uintptr_t raw)
{
    Data * des = reinterpret_cast<Data *>(raw);

    return(des);
}

int main()
{
    Data src;
	Data *dest;

    src.nb = 40;
    src.str = "Salut";

    std::cout << "src nb =  " << src.nb << std::endl;
    std::cout << "src str = " << src.str << std::endl;
	std::cout << "Pointeur value = " << &src << std::endl;
    std::cout << std::endl;
    
	dest = deserialize(serialize(&src));
    
    std::cout << "src nb =  " << dest->nb << std::endl;
    std::cout << "src str = " << dest->str << std::endl;
	std::cout << "Pointeur value = " << dest << std::endl;
    return (0);
}