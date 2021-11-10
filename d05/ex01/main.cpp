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
#include "Form.hpp"

int main(void)
{
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
    }
    {
        Bureaucrat jack("Jack", 50);  

        Form form1("F1", 10, 10);
        Form form2("F2", 100, 10);
        Form form3("F3", 1000, 10);

        std::cout << form1 << std::endl;
        std::cout << form2 << std::endl;

        jack.signForm(form1);
        jack.signForm(form2);
        jack.signForm(form2);
    }
    return (0);
}