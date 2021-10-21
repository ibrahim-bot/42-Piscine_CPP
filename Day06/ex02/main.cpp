/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrahim <ibrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 02:00:45 by ibrahim           #+#    #+#             */
/*   Updated: 2021/10/21 03:24:23 by ibrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>

class Base {public : virtual ~Base( void ) {} };
class A : public Base {};
class B : public Base {};
class C : public Base {};

Base * generate(void)
{
    int r;

	r = rand() % 3;
	if (r == 0)
    {
        std::cout << "Class A" << std::endl;
		return new A;
    }
	else if (r == 1)
    {
        std::cout << "Class B" << std::endl;
		return new B;
    }
    std::cout << "Class C" << std::endl;
    return new C;
        
}

void identify(Base * p)
{
    A * c_a = dynamic_cast<A *>(p);

    if (c_a == NULL)
        std::cout << "Failed ! for Class A." << std::endl;
    else
        std::cout << "A" << std::endl;
    
    B * c_b = dynamic_cast<B *>(p);

    if (c_b == NULL)
        std::cout << "Failed ! for Class B." << std::endl;
    else
        std::cout << "B" << std::endl;

    C * c_c = dynamic_cast<C *>(p);

    if (c_c == NULL)
        std::cout << "Failed ! for Class C." << std::endl;
    else
        std::cout << "C" << std::endl;
}

void identify( Base & p)
{
    try
    {
        A & c_a = dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
        
    }
    catch(std::bad_cast &e)
    {
        std::cout << "Failed ! for Class A." << std::endl;
    }
    
    try
    {
        B & c_b = dynamic_cast<B &>(p);
        std::cout << "B" << std::endl;
        
    }
    catch(std::bad_cast &e)
    {
        std::cout << "Failed ! for Class B." << std::endl;
    }
    
    try
    {
        C & c_c = dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
        
    }
    catch(std::bad_cast &e)
    {
        std::cout << "Failed ! for Class C." << std::endl;
    }
       
}

int main(void)
{
    srand(time(NULL));
    Base *type = generate();
    
    identify(type);
    identify(*type);
    return (0);
}