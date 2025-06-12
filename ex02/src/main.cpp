/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 18:41:54 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/06/12 19:34:37 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"

int main() {
	Array<int> arr1(3);
	arr1[0] = 10;
	arr1[1] = 20;
	arr1[2] = 30;

	std::cout << "arr1 size: " << arr1.size() << std::endl;

	Array<int> arr2 = arr1; // Copy constructor
	std::cout << "arr2[1]: " << arr2[1] << std::endl;

	Array<int> arr3;
	arr3 = arr1; // Assignment operator
	std::cout << "arr3[2]: " << arr3[2] << std::endl;

	try {
		std::cout << "Access out of bounds: " << arr1[5] << std::endl;
	} catch (const std::exception& e) {
		std::cout << "Caught exception: " << e.what() << std::endl;
	}
	return 0;
}
