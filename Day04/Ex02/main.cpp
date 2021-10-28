/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:05:18 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/28 15:36:20 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    Animal* i = new Cat();
    Animal* j = new Dog();

    //Animal* k = new Animal();
    
    i->makeSound();
    j->makeSound();
    
    delete i;
    delete j;
    
    std::cout << std::endl;
    Dog chien;
	{
		Dog tmp = chien;
	}
    return (0);
}