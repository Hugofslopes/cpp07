/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 18:42:37 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/06/12 19:34:11 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <exception>
# include <cstdlib>
# include "../src/Array.tpp"

template <typename T>

class Array
{
    public:
        Array(void);
        Array(unsigned int n);
        Array(Array const &other);
        ~Array(void);
        Array &operator=(Array const &src);
        T& operator[](unsigned int i);

        unsigned int size(void) const;
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