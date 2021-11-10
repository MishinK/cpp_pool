/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 16:19:21 by ashea             #+#    #+#             */
/*   Updated: 2021/03/26 16:19:23 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    int i[] = {1,2,3,4,5};
    char c[] = { 'b', 'c' , 'd', 'e', 'f'};

    std::cout << "int array decrement" << std::endl;
    ::iter<int>(i, 5, decrement);
    std::cout << " " << i[0] << " " << i[1] << " " << i[2] << " " << i[3] << " " << i[4];
    std::cout << "\nint array increment" << std::endl;
    ::iter<int>(i, 5, increment);
    std::cout << " " << i[0] << " " << i[1] << " " << i[2] << " " << i[3] << " " << i[4];
    std::cout << "\nchar array decrement" << std::endl;
    ::iter<char>(c, 5, decrement);
    std::cout << " " << c[0] << " " << c[1] << " " << c[2] << " " << c[3] << " " << c[4];
    std::cout << "\nchar array increment" << std::endl;
    ::iter<char>(c, 5, increment);
    std::cout << " " << c[0] << " " << c[1] << " " << c[2] << " " << c[3] << " " << c[4];
}
