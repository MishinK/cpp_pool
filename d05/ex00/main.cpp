/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 03:43:42 by ashea             #+#    #+#             */
/*   Updated: 2021/03/24 03:43:44 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat jack("Jack", 0);    
    Bureaucrat jack2("Jack2", 151);

    std::cout << jack << std::endl;
    std::cout << jack2 << std::endl;
    
    jack.incrementGrade();
    jack2.decrementGrade();

    std::cout << jack << std::endl;
    std::cout << jack2 << std::endl;

    jack.decrementGrade();
    jack2.incrementGrade();
    std::cout << jack << std::endl;
    std::cout << jack2 << std::endl;

    return (0);
}