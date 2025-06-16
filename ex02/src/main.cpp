/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 18:41:54 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/06/16 16:34:03 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"

int main() {
	Array<int> arr1(3);
	arr1[0] = 10;
	arr1[1] = 20;
	arr1[2] = 30;

	std::cout << "arr1 size: " << arr1.size() << std::endl;

	Array<int> arr2(2);
	arr2 = arr1;
	std::cout << "arr2[1]: " << arr2[1] << std::endl;

	Array<int> arr3;
	arr3 = arr1;
	std::cout << "arr3[2]: " << arr3[2] << std::endl;

	try {
		std::cout << "Access out of bounds: " << arr1[5] << std::endl;
	} 
	catch (const std::exception& e) {
		std::cout << "Caught exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	Array<char> arr4(4);
	arr4[0] = 'Y';
	arr4[1] = 'E';
	arr4[2] = 'P';
	arr4[3] = '!';
	Array<char> arr5(arr4);
	std::cout << "Arr5 size: " << arr5.size() << std::endl;
	return 0;
}
