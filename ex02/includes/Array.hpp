/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 18:42:37 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/06/16 16:33:53 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <exception>

template <typename T>

class Array
{
    public:
        Array(void){
            _array = new T[0];
            _size = 0;
            std::cout << "Default constructor called" << std::endl;
        }
        Array(unsigned int n){
            _array = new T[n];
            _size = n;
            std::cout << "Constructor parametrized constructor alled" << std::endl;
        }
        Array(Array const &other){
            std::cout << "Copy constructor called" << std::endl;
            _size = other._size;
            _array = new T[_size];
            for (unsigned int i = 0; i < _size; i++)
                _array[i] = other._array[i];
        }
        Array &operator=(Array const &other){
            std::cout << "Assignment operator called" << std::endl;
            if (this != &other)
            {
                delete [] _array;
                _size = other._size;
                _array = new T[other._size];
                for (size_t i = 0; i < other._size; i++)
                    _array[i] = other._array[i];
            }
            return (*this);
        }
        ~Array(void){
            std::cout << "Destructor called" << std::endl;
            delete [] _array;
        }

        T& operator[](unsigned int i){
            if (i >= _size || _array == NULL)
                throw Array<T>::OutOfRangeException();
            return (_array[i]);
        }
        unsigned int size(void) const{
            return (_size);
        }
        
        class OutOfRangeException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

    private:
        T *_array;
        unsigned int _size;
};

template <typename T>

const char *Array<T>::OutOfRangeException::what() const throw()
{
    return "Index out of range";
}
#endif