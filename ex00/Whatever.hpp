/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:14:06 by vgejno            #+#    #+#             */
/*   Updated: 2023/08/21 19:14:09 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>

void swap( T &a, T &b) {
	
	T temp = a;
	a= b;
	b = temp; 
}

template <typename T>

T min( T &a, T &b) {
 
	return b <= a ? b : a;
}

template <typename T>

T max( T &a, T &b) {
 
	return b >= a ? b : a;
}

#endif