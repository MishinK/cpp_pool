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
#include "PresidentialPardonForm.hpp"   
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

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
        std::cout << "-----My test 1-------\n";
        
        Bureaucrat jack1("Jack1", 50);
        Bureaucrat jack2("Jack2", 20);
        Bureaucrat jack3("Jack3", 1);

        PresidentialPardonForm ppf("Bob");

        jack1.executeForm(ppf);

        jack1.signForm(ppf);
        jack2.signForm(ppf);
        jack3.signForm(ppf);

        jack1.executeForm(ppf);
        jack2.executeForm(ppf);
        jack3.executeForm(ppf);

        std::cout << "-----My test 2-------\n";

        RobotomyRequestForm rrf("Bob");
        
        jack1.executeForm(rrf);

        jack1.signForm(rrf);
        jack2.signForm(rrf);
        jack3.signForm(rrf);

        jack1.executeForm(rrf);
        jack2.executeForm(rrf);
        jack3.executeForm(rrf);
        jack3.executeForm(rrf);
        jack3.executeForm(rrf);

        std::cout << "-----My test 3-------\n";

        ShrubberyCreationForm scf("Bob");

        jack1.executeForm(scf);
        jack1.signForm(scf);
        jack1.executeForm(scf);
    }
    {
        std::cout << "-----My test 4-------\n";

        Intern  someRandomIntern;
        Form*   rrf;
    
        rrf = someRandomIntern.makeForm("robotom request", "Bender");
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        std::cout << *rrf << std::endl;

        Bureaucrat jack("Jack", 1);
        jack.executeForm(*rrf);
        jack.signForm(*rrf);
        jack.executeForm(*rrf);
    }
    return (0);
}