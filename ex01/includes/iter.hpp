/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 18:42:37 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/06/12 14:47:55 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
#include <cctype>

template <typename T, typename F> 
void iter(T* a, size_t b, F func) {
	for (size_t i = 0; i < b ; i++)
		a[i] = func(a[i]);
}

#endif