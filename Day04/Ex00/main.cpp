/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 17:30:48 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/28 13:31:53 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* meta = new Animal();
    
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    
    j->makeSound();
    i->makeSound(); //will output the cat sound!
    meta->makeSound();
    
    
    delete i;
    delete j;
    delete meta;
    
    std::cout << std::endl;
    const WrongAnimal* beta = new WrongAnimal();
    const WrongAnimal* cat = new WrongCat();

    beta->makeSound();
    cat->makeSound();
    
    return (0);
}