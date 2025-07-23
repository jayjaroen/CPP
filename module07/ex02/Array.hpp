/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:28:57 by jjaroens          #+#    #+#             */
/*   Updated: 2025/07/23 21:58:25 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

# include <iostream>
# include <stdexcept>


template <typename T>
class Array
{
	private:
		unsigned int _len;
		T *_array;
	
	public:
		Array(): _len(0), _array(nullptr) 
		{
			std::cout << "Default constructor" << std::endl;	
		}
		
		Array(unsigned int n): _len(n), _array(new T[n]())
		{
			std::cout << "Parameter constructor" << std::endl;
		}
		
		~Array()
		{
			std::cout << "Deconstructor" << std::endl;
			delete[] _array;
		}
		
		Array(Array<T> const &other): _len(other._len), _array(new T[other._len])
		{
			std::cout << "Copy constructor" << std::endl;
			for (unsigned int i = 0; i < _len ; i++)
				_array[i] = other._array[i];
		}
		
		Array& operator=(Array<T> const &other)
		{
			std::cout << "Assignment operator" << std::endl;
			if (this != &other)
			{
				delete[] _array;
				_len = other._len;
				_array = new T[_len];
				for (unsigned int i = 0; i < _len ; i++)
					_array[i] = other._array[i];
			}
			return *this;
		}
		
		// const T& operator[](unsigned int i)
		// {
		// 	if ( i >= _len)
		// 		throw std::out_of_range("Index out of bound");
		// 	return _array[i];
		// }

		T& operator[](int i)
		{
			if (i < 0 || static_cast<unsigned int>(i) >= _len)
				throw std::out_of_range("Index out of bound");
			return _array[i];
		}

		unsigned int size() const
		{
			return _len;
		}
};

#endif

