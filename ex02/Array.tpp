/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 20:32:35 by vgejno            #+#    #+#             */
/*   Updated: 2023/08/24 13:05:21 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

#include <iomanip>

template < typename T >
Array< T >::Array() : _array(nullptr), _size(0) {}

template < typename T >
Array< T >::~Array() {
	
	delete[] this->_array;
}

//constructor with parameter
template < typename T >
Array< T >::Array( unsigned int n ) : _size(n) {
	
	this->_array = new T[n]; //allocate memory for the array
	
	for( unsigned int i = 0; i < n; i++ ) {

		this->_array[i] = 0;	
	}
}

//copy constructor
template < typename T >
Array< T >::Array( const Array& other ) {
	
	this->_size = other.size();
	this->_array = new T[this->_size];
	
	for( unsigned int i = 0; i < this->size(); i++ ) {
			
		this->_array[i] = other._array[i];
	}
}

/*Copy assignment operator
Avoid self assignement
For Arrays of different sizes, deallocated original left-side array,
then allocate new left-side array*/
template < typename T >
Array< T >& Array< T >::operator=( const Array& rhs ) {
	
	if( this != &rhs ) {
		
		delete[] this->_array;
		
		this->_size = rhs.size();
		this->_array = new T[this->_size];
		
		for( unsigned int i = 0; i < this->size(); i++ ) {
			
			this->_array[i] = rhs._array[i];
		}
	}
	return *this;
}

template < typename T >
unsigned int Array< T >::size() const {

	return this->_size;
}

template < typename T >
void* Array< T >::operator new[]( size_t size ) {
	
	return ::operator new[](size);
}

template < typename T >
void Array< T >::operator delete[]( void *ptr ) {
	
	::operator delete[](ptr);
}

template < typename T >
T& Array< T >::operator[](unsigned int index){

		if( index < 0 || static_cast<unsigned int>(index) >= _size ) {
			throw Array< T >::Exception();
		}
		return this->_array[static_cast<unsigned int>(index)];
}

template < typename T >
T& Array< T >::operator[](unsigned int index) const {

		if( index >= _size ) {
			throw Array< T >::Exception();
		}
		return this->_array[index];
}

template < typename T >
const char* Array< T >::Exception::what() const throw() {

	return ("Array: Subscript out of range");
}

template < typename T >
bool Array< T >::operator==( const Array& rhs) const {

	//check size of different arrays
	if( _size != rhs._size ) {
		return false; 
	}
	
	// Mismatched elements indicate arrays are not equal
	for( unsigned int i = 0; i < _size; i++ ) {
		
		if( _array[i] != rhs._array[i] ) {
			return false;
		}
	}
	return true;
}

template < typename T >
bool Array< T >::operator!=( const Array& rhs ) const {
	
	return !(*this == rhs);
}

template <typename T>
void Array< T >::iter(T *array, size_t size, void (*f)( T& )) {
	
	for( size_t i = 0; i < size; i++ ) {
		f(array[i]);
	}
}

template < typename T >
std::ostream& operator<<( std::ostream& os, const Array< T >& rhs ) {
	
	for( unsigned int i = 0; i < rhs.size(); i++ ) {
			
		os << std::setprecision(2) << std::fixed <<rhs[i] << " "; 
	}
	return os;
}

#endif
