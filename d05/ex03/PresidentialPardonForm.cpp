/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 17:52:56 by ashea             #+#    #+#             */
/*   Updated: 2021/03/24 17:52:57 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string _target):
    Form("Presidential Pardon Form", 25, 5), target(_target){}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &ppform):
    Form(ppform), target(ppform.target){}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &ppform)
{
	(void)ppform;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    try
    {
	    Form::execute(executor);
	    std::cout << "* " << target << " has been pardoned by Zafod Beeblebrox *" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Bureaucrat " << executor.getName() << "  action not taken, form - " << this->getName() << std::endl;
    }
}

