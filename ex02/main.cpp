/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:46:12 by vgejno            #+#    #+#             */
/*   Updated: 2023/08/24 13:06:11 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include "Array.hpp"

#define MAX_VAL 750

template < typename T >
void increment( T& num ) {
    num++;
}

void test_array() {

    Array<int> integers(12);
    Array<double> doubles(50);
    Array<double> doublesTwo;
    Array<float> floats(4);
    Array<char> chars(10);

	std::cout << GR << "	# Test Array size #	" << std::endl << std::endl;
    
    std::cout << "Integer array size: " << integers.size() << std::endl;
    std::cout << "Doubles array size: " << doubles.size() << std::endl;
    std::cout << "DoublesTwo array size: " << doublesTwo.size() << std::endl;
    std::cout << "Floats array size: " << floats.size() << std::endl;
    std::cout << "Chars array size: " << chars.size() << std::endl << std::endl;

	std::cout << YL << "	# Test copy #	" << std::endl << std::endl;

    Array<int> integers1(integers);
    std::cout << "integer1 array size: " << integers1.size() << std::endl << std::endl;
    
	std::cout << MAG << "	# Test assignement operator #	" << std::endl << std::endl;
    
    doublesTwo = doubles;
    std::cout << "Doubles array size: " << doubles.size() << std::endl;
    std::cout << "DoublesTwo array size: " << doublesTwo.size() << std::endl;

    std::cout << "doubles == doublesTwo: "
                << (( doubles == doublesTwo ) ? "true" : "false") << std::endl << std::endl;

	std::cout << OR << "	# Test fill Array #	" << std::endl << std::endl;

    Array<int> a(4);
    Array<double> b(4);
    Array<float> c(4);
    Array<char> d(4);
    
    std::cout << std::fixed << std::setprecision(2);
    
    for( unsigned int i = 100; i < 104; i++ ) {
        
        a[i - 100] = i;
        b[i - 100] = static_cast<double>(i) / 3;
        c[i - 100] = static_cast<double>(i) / 5;
        d[i - 100] = i;
    }

    std::cout << "Integer array: " << a << std::endl;
    std::cout << "Doubles array: " << b << std::endl;
    std::cout << "Floats array: " << c << std::endl;
    std::cout << "Chars array: " << d << std::endl << std::endl;
    
	std::cout << BL << "	# Test iter on Array #	" << std::endl << std::endl;
    
    a.iter(&a[0], 4, &increment<int>);
    b.iter(&b[0], 4, &increment<double>);
    c.iter(&c[0], 4, &increment<float>);
    d.iter(&d[0], 4, &increment<char>);

    std::cout << "Integer array: " << a << std::endl;
    std::cout << "Doubles array: " << b << std::endl;
    std::cout << "Floats array: " << c << std::endl;
    std::cout << "Chars array: " << d << std::endl << std::endl;
    
	std::cout << YL << "	# Test access elements in Array #	" << std::endl << std::endl;

     try {
        
         std::cout << "a[2]: " << a[2] << std::endl;
    } catch ( std::exception& e ) {
        
        std::cout << e.what() << std::endl;
    }
   
    try {
        
        std::cout << "b[-2]: " << b[-2] << std::endl;
    } catch ( std::exception& e ) {
        
        std::cout << e.what() << std::endl;
    }

    std::cout << RS << std::endl;
    
}

int main(int, char**)
{
    test_array();

	std::cout << "	# Test provided main #	" << std::endl << std::endl;

    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
     //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    std::cout << "Check numbers Array<T> and mirror Array" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    std::cout << "Check OK" << std::endl << std::endl;

    std::cout << "Check index out of range" << std::endl;
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
    std::cout << "Check OK" << std::endl << std::endl;

    std::cout << "Check numbers Array" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    std::cout << "Check OK" << std::endl << std::endl;

    delete [] mirror;
    return 0;
    }