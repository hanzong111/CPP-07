/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:51:34 by ojing-ha          #+#    #+#             */
/*   Updated: 2023/10/22 15:51:35 by ojing-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
	public:
		/* Orthrodox canonical form */
		Array(void) : _array(new T[0]), _size(0) {};
		Array(unsigned int n) : _array(new T[n]), _size(n) {};
		Array(const Array &src) { *this = src; };
		~Array() {delete [] _array; };
		Array	&operator=(const Array &src)
		{
			T	*newArray = new T[src._size];
			for (unsigned int i = 0; i < src._size; ++i)
				newArray[i] = src[i];
			this->_array = newArray;
			this->_size = src._size;
			return (*this);
		};

		/* Member functions */
		T		&operator[](const unsigned int i)
		{
			if (i < 0 || i >= this->_size)
				throw Array::IndexOutOfRangeException();
			return (this->_array[i]);
		}
		const T		&operator[](const unsigned int i) const
		{
			if (i < 0 || i >= this->_size)
				throw Array::IndexOutOfRangeException();
			return (this->_array[i]);
		}
		unsigned int	size(void) const { return this->_size; };

		/* Exception classes */
		class IndexOutOfRangeException : public std::exception
		{
			public:
				const char	*what() const throw()
				{
					return ("Index out of range");
				}
		};
	private:
		T				*_array;
		unsigned int	_size;
};

#endif
