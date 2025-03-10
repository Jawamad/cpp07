/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmuller <flmuller@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:23:42 by flmuller          #+#    #+#             */
/*   Updated: 2025/03/06 15:30:54 by flmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template< typename T >
void	iter(T* array, size_t size, void (*f)(T&))
{
	for (size_t i = 0; i < size; i++)
		f(array[i]);
}
template< typename T >
void	iter(T* array, size_t size, void (*f)(const T&))
{
	for (size_t i = 0; i < size; i++)
		f(array[i]);
}
template< typename T >
void	ft_double(T &a )
{
	a = a + a;
}
template< typename T >
void	printvalue(T const &value)
{
	std::cout << value;
}

#endif