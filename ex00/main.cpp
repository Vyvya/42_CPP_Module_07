/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:26:49 by vgejno            #+#    #+#             */
/*   Updated: 2023/08/21 18:51:20 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Whatever.hpp"

int main() {

	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
	// int a = 21;
	// int b = 42;

	// std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
	// std::cout << "explicit instantiation swap " << a << " and " << b << " is ";
	// swap<int>(a, b);
	// std::cout << "After swap: a = " << a << ", b = " << b << std::endl;

	// std::cout << "implicit instantiation swap " << a << " and " << b << " is ";
	// swap( a, b );
	// std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
	
	// std::cout << "explicit instantiation min " << a << " and " << b << " is ";
	// std::cout << min<int>( a, b ) << std::endl;

	// std::cout << "implicit instantiation min " << a << " and " << b << " is ";
	// std::cout << min( a, b ) << std::endl;
	
	// std::cout << "explicit instantiation max of " << a << " and " << b << " is ";
	// std::cout << max<int>( a, b ) << std::endl; //explicit instantiation;

	// std::cout << "implicit instantiation max of " << a << " and " << b << " is ";
	// std::cout << max( a, b ) << std::endl << std::endl; //implicit instantiation; 

	// float c = -1.7f;
	// float d = 4.2f;

	// std::cout << "Before swap: c = " << c << ", d = " << d << std::endl;
	// std::cout << "explicit instantiation swap " << c << " and " << d << " is ";
	// swap<float>(c, d);
	// std::cout << "After swap: c = " << c << ", d = " << d << std::endl;

	// std::cout << "implicit instantiation swap " << c << " and " << d << " is ";
	// swap( c, d );
	// std::cout << "After swap: c = " << c << ", d = " << d << std::endl;

	// std::cout << "explicit instantiation min " << a << " and " << b << " is ";
	// std::cout << min<float>( c, d ) << std::endl;

	// std::cout << "implicit instantiation min " << a << " and " << b << " is ";
	// std::cout << min( c, d ) << std::endl;

	// std::cout << "explicit instantiation max of " << c << " and " << d << " is ";
	// std::cout << max<float>( c, d ) << std::endl; //explicit instantiation;

	// std::cout << "implicit instantiation max of " << c << " and " << d << " is ";
	// std::cout << max( c, d ) << std::endl << std::endl; //implicit instantiation;

	// char e = 'a';
	// char f = 'h';

	// std::cout << "Before swap: e = " << e << ", f = " << f << std::endl;
	// std::cout << "explicit instantiation swap " << e << " and " << f << " is ";
	// swap<char>(e, f);
	// std::cout << "After swap: e = " << e << ", f = " << f << std::endl;

	// std::cout << "implicit instantiation swap " << e << " and " << f << " is ";
	// swap( e, f );
	// std::cout << "After swap: e = " << e << ", f = " << f << std::endl;

	// std::cout << "explicit instantiation min " << a << " and " << b << " is ";
	// std::cout << min<char>( e, f ) << std::endl;

	// std::cout << "implicit instantiation min " << a << " and " << b << " is ";
	// std::cout << min( e, f ) << std::endl;
	
	// std::cout << "explicit instantiation max of " << e << " and " << f << " is ";
	// std::cout << max<char>( e, f ) << std::endl; //explicit instantiation;

	// std::cout << "implicit instantiation max of " << e << " and " << f << " is ";
	// std::cout << max( e, f ) << std::endl << std::endl; //implicit instantiation; 

	return 0;
}