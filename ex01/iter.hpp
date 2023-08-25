/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgejno <vgejno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:14:19 by vgejno            #+#    #+#             */
/*   Updated: 2023/08/21 19:14:22 by vgejno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename A, typename F>

void iter(A array, size_t length, F function)
{
	for( size_t i = 0; i < length; i++ ) {
		function(array[i]);
	}
}

#endif