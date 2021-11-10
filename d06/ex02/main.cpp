/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 03:27:04 by ashea             #+#    #+#             */
/*   Updated: 2021/03/26 03:27:05 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"

int main(void)
{
    A a;
    B b;
    C c;

    srand(time(NULL));
    
    std::cout << "=== Test pointer ===" << std::endl;
    identify_from_pointer(&a);
    identify_from_pointer(&b);
    identify_from_pointer(&c);
    identify_from_pointer(generate());
    identify_from_pointer(generate());
    identify_from_pointer(generate());

    std::cout << "== Test reference ==" << std::endl;
    identify_from_reference(a);
    identify_from_reference(b);
    identify_from_reference(c);
    identify_from_reference(*generate());
    identify_from_reference(*generate());
    identify_from_reference(*generate());

    return (0);
}