/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmuller <flmuller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 15:42:34 by flmuller          #+#    #+#             */
/*   Updated: 2025/03/28 14:08:25 by flmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef UTILS_HPP
# define UTILS_HPP

#include <iostream>

template< typename T >
void	swap(T & a, T & b)
{
	T temp = b;
	b = a;
	a = temp;
}
template< typename T >
T	min(T const & a, T const & b)
{
	return (a < b) ? a : b;
}
template< typename T >
T	max(T const & a, T const & b)
{
	return (a > b) ? a : b;
}

#endif