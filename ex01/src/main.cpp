/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 18:41:54 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/06/12 14:57:15 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"

char myToUpper(char c)
{
    if (c > 96 && c < 123)
        return(c - 32 );
    return (c);
}

int icrementFive(int nb)
{
    return (nb + 5);
}

float decrementFloat(float nb)
{
    return (nb - 0.1f);
}

int main(void) {
char a[] = "Hello";
iter(a, 5, myToUpper);
std::cout << a << std::endl;

int b[]={1,2,3,4,5};
iter(b, 5, icrementFive);
for (size_t i = 0 ; i < 5; i++)
    std::cout << b[i] << std::endl;

float c[]={1.1f,1.2f,1.3f,1.4f,1.5f};
iter(c, 5, decrementFloat);
for (size_t i = 0 ; i < 5; i++)
    std::cout << c[i] << std::endl;
return 0;
}
