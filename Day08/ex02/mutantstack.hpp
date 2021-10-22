/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:05:58 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/22 19:35:47 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <vector>
#include <list>
#include <stack>

template<typename T>
class MutantStack : private std::stack<T>
{
    public:
        MutantStack(/* args */) {};
        MutantStack<T>(MutantStack<T> const & src) { *this = src; }
		MutantStack<T> & operator=(MutantStack<T> const & rhs) { if (this != &rhs) this->c = rhs.c; return *this; }
        ~MutantStack() {};

        using std::stack<T>::empty;
        using std::stack<T>::size;
        using std::stack<T>::top;
        using std::stack<T>::push;
        using std::stack<T>::pop;

        typedef typename T::iterator iterator;

        iterator begin() {return this->c.begin();}
};

#endif