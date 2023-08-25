/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:13:51 by vgejno            #+#    #+#             */
/*   Updated: 2023/08/24 13:04:52 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>
#include <string>
#include <ctime>
#include "Color.hpp"

template <typename T>

class Array {

	private:

		T* _array; //pointer to array
		unsigned int _size;

	public:
		
		Array();
		Array( unsigned int n );
		~Array();

		Array( const Array& other );
		Array& operator=( const Array& rhs );
		
		static void* operator new[]( size_t size );
		static void operator delete[]( void *ptr );
		
		T& operator[](unsigned int index);
		T& operator[](unsigned int index) const;
		bool operator==( const Array& ) const;
		//inequality operator; returns negative of ==
		bool operator!=( const Array& rhs ) const;

		unsigned int size() const;
		void iter(T *array, size_t size, void (*f)( T& ));
		
		class Exception : public std::exception { //inherit form std::Exception

			public:	
				
				const char *what() const throw();
		};
};

template < typename T >
std::ostream& operator<<( std::ostream& os, const Array< T >& rhs );

#include "Array.tpp"

#endif