/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:05:23 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/22 19:32:42 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main()
{
    MutantStack<int> mstack;
    
    mstack.push(5);
    mstack.push(17);
    
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.top() << std::endl;
    
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);

   // MutantStack<int>::iterator it = mstack.begin();
   // MutantStack<int>::iterator ite = mstack.end();

    // ++it;
    // --it;
    
    // while (it != ite)
    // {
    //     std::cout << *it << std::endl;
    //     ++it;
    // }
    
    //std::stack<int> s(mstack);
    
    return (0);
}

// int main()
// {
//     std::list<int> mstack;
    
//     mstack.push_front(5);
//     mstack.push_front(20);
    
//     std::cout << mstack.front() << std::endl;
//     mstack.pop_back();
    
//     std::cout << mstack.size() << std::endl;
//     mstack.push_back(3);
//     mstack.push_back(5);
//     mstack.push_back(737);
//     //[...]
//     mstack.push_back(0);

//     std::list<int>::iterator it = mstack.begin();
//     std::list<int>::iterator ite = mstack.end();

//     ++it;
//     --it;
    
//     while (it != ite)
//     {
//         std::cout << *it << std::endl;
//         ++it;
//     }
    
//     //std::stack<int> s(mstack);
    
//     return (0);
// }