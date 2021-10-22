/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:48:04 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/22 14:59:36 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL]; 
    
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand() % 1000;
        numbers[i] = value;
        mirror[i] = value;
    }
    
    //mirror[0] = 5;
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }

    numbers[0] = 0;
    //SCOPE
    Array<int> tmp = numbers;
    Array<int> test(tmp);
  


    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    
    for (int i = 0; i < 5; i++)
    {
        std::cout << std::endl;
        std::cout << "number = ";
        numbers.Display(i);
        std::cout << "copy   = ";
        test.Display(i);
        std::cout << "tmp    = ";
        tmp.Display(i);
        std::cout << std::endl;
    }
    
    delete [] mirror;//
    return 0;
}
