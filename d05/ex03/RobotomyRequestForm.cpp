/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 17:53:11 by ashea             #+#    #+#             */
/*   Updated: 2021/03/24 17:53:13 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string _target):
    Form("Robotomy Request Form", 72, 45), target(_target){}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &rrform):
    Form(rrform), target(rrform.target){}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rrform)
{
	(void)rrform;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    try
    {
	    Form::execute(executor);
	    
	    std::cout << "* VRRR BZZZ " << target;
        if (rand() % 2)
		    std::cout << " has been robotomized successfully! *" << std::endl;
        else
		    std::cout << " robotomization is fail :( *" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Bureaucrat " << executor.getName() << "  action not taken, form - " << this->getName() << std::endl;
    }
}