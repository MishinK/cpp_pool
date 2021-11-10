/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 12:13:43 by ashea             #+#    #+#             */
/*   Updated: 2021/01/19 12:13:51 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int    main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* ptr = &str;
    std::cout << "using the pointer: " << *ptr << std::endl;
    std::string& ref = str;
    std::cout << "using the reference: " << ref << std::endl;
    return (0);
}
