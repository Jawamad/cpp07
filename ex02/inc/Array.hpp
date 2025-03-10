/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmuller <flmuller@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 11:41:18 by flmuller          #+#    #+#             */
/*   Updated: 2025/03/10 14:04:08 by flmuller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept>

template<typename T>
class Array
{
	private:
		T*				_array;
		unsigned int	_size;
	public:
		Array(): _array(NULL), _size(0) {}
		Array(unsigned int n): _array(new T[n]()), _size(n) {}
		Array(Array const& copy): _array(NULL), _size(0)
		{
			*this=copy;
		}
		~Array()
		{
			delete [] _array;
		}
		Array&	operator=(Array const& rhs)
		{
			if (this != &rhs)
			{
				if (_array)
					delete [] _array;
				this->_size = rhs.size();
				this->_array = new T[_size];
				for (unsigned int i = 0; i < _size; i++)
					_array[i] = rhs.getArray()[i];
	
			}
			return *this;
		}
		T&	operator[](unsigned int i) {
			if (i >= _size)
				throw std::out_of_range("index for this array is out of range");
			return _array[i];
		}
		unsigned int size() const
		{
			return _size;
		}
		T*	getArray() const
		{
			return this->_array;
		}
};

#endif