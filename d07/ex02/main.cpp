/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 16:57:17 by ashea             #+#    #+#             */
/*   Updated: 2021/03/26 16:57:19 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    Array<int> int_array1(5);
	
	for (unsigned int i = 0; i < int_array1.getSize(); i++)
	{
		int_array1[i] = i;
		std::cout << "int_array1["<< i << "] = " << int_array1[i] << std::endl;
	}
    Array<int> int_array2;
    int_array2 = int_array1; 
    for (unsigned int i = 0; i < int_array2.getSize(); i++)
	{
		int_array2[i] = i + 1;
		std::cout << "int_array2["<< i << "] = " << int_array2[i] << std::endl;
	}
    Array<int> int_array3(int_array2);
    for (unsigned int i = 0; i < int_array3.getSize(); i++)
	{
		int_array3[i] = i + 2;
		std::cout << "int_array3["<< i << "] = " << int_array3[i] << std::endl;
	}	
	try
	{
		int_array3[-1] = -1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		int_array3[5] = 5;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
    try
	{
		Array<int> int_array4(-1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
    return (0);
}