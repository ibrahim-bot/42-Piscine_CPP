/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:47:34 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/22 15:01:24 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <strings.h>

template<typename T>
class Array
{
    private:
        unsigned int _n;
        T *_tab;

    public:
        Array<T>() { this->_n = 0; this->_tab = NULL; return; }
        Array<T>(unsigned int n) { this->_n = n; this->_tab = new T[n]; ft_bzero(n); return ; }
    
        Array<T>(Array const & src)
        {
            this->_n = src._n;
            this->_tab = new T[this->_n];
            for (unsigned int i = 0; i < this->_n; i++)
                this->_tab[i] = src._tab[i];
        }
        
        ~Array<T>() { if (this->_tab) delete this->_tab; }
        
        Array & operator=(Array const & rhs) {
            this->_n = rhs->_n;
            this->_tab = new T[this->_n];
            for (unsigned int i = 0; i < this->_n; i++)
                this->_tab[i] = rhs->_tab[i];
        } 

        T & operator[](unsigned int nb) { 
            if (nb >= this->_n) 
                throw Array<T>::OutLimits();
            return (this->_tab[nb]);
        }
        
        class OutLimits : public std::exception
        {
            public:
            virtual const char* what() const throw()
            {
                return "This element is out of the limits";
            }
        };
        
        
        int size() { int i = 0; while (this->_tab[i]) i++; return (i); }
        void ft_bzero(unsigned int n) { unsigned int i = 0; while (i < n) this->_tab[i++] = '\0'; }
        void Display(int i) { std::cout << this->_tab[i] << std::endl;}
};

#endif