/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 19:04:58 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/06/12 19:32:05 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"

template<typename T> 
Array<T>::Array(void) {
	_array = new T[0];
	_size(0);
	std::cout << "Default constructor called" << std::endl;
}

template<typename T> 
Array<T>::Array(unsigned int n) {
	_array = new T[n];
	_size = n;
	std::cout << "Constructor parametrized constructor alled" << std::endl;
}

template<typename T> 
Array<T>::Array(Array const &src) : _array(new T[src._size]), _size(src._size)
{
	std::cout << "Copy constructor called" << std::endl;
	for (unsigned int i = 0; i < _size; i++)
		_array[i] = src._array[i];
}

template<typename T>
Array<T>::~Array(void) {
	std::cout << "Destructor called" << std::endl;
	delete [] _array;
}

template<typename T>
Array<T>& Array<T>::operator=(Array const &src)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &src)
	{
		delete [] _array;
		_size = src._size;
		_array = new T[src._size];
		for (size_t i = 0; i < _size; i++)
			_array[i] = src._array[i];
	}
	return (*this);
}

template<typename T>
T& Array<T>::operator[](unsigned int i)
{
	if (i >= _size || _array == NULL)
		throw Array<T>::OutOfRangeException();
	return (_array[i]);
}

template<typename T>
unsigned int Array<T>::size(void) const {
	std::cout << "Size called" << std::endl;
	return (_size);
}
