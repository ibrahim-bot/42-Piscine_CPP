/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 15:54:42 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/22 17:54:21 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <list>

class Span
{
    private:
        unsigned int _N;
        std::list<int>  lst;     

    public:
        Span( void );
        Span( unsigned int N );
        virtual ~Span();
        void addNumber(int nb);
        int shortestSpan();
        int longestSpan();
        void display();

    class Numberfault : public std::exception
    {
        public :
            virtual const char* what() const throw()
            {
                return ("Error: Span is full !");
            }
    };
    class SpanEmpty : public std::exception
    {
        public :
            virtual const char* what() const throw()
            {
                return ("Error: no numbers stored, or only one, here is no span to find.");
            }
    };
};


#endif