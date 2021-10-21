/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 12:43:23 by ichougra          #+#    #+#             */
/*   Updated: 2021/10/21 18:45:59 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string.h>
#include <stdlib.h>

class Awesome
{
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }

		private:
		int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x )
{
	std::cout << x << std::endl;
	return;
}
		// template< typename T >
		// void diplay( T x ){std::cout << x << std::endl; return;}

int main()
{
	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];

	iter( tab, 5, print);
	iter( tab2, 5, print);
	// iter( tab, 5, diplay);
	// iter( tab2, 5, diplay);

	return 0;
}