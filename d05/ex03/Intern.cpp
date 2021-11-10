/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 20:54:00 by ashea             #+#    #+#             */
/*   Updated: 2021/03/24 20:54:01 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}
Intern::~Intern(){}

Intern::Intern(Intern const &intern)
{
    (void)intern;
}

Intern &Intern::operator=(Intern const &intern)
{
	(void)intern;
	return (*this);
}

Intern::UnknownFormException::UnknownFormException(std::string _name) throw() :
Exception("\x1b[1;31mException Intern: \"" + _name + "\", unknown form name\x1b[0m"){}

static Form* newPresidentialPardonForm(std::string const &target)
{
    return (new PresidentialPardonForm(target));
}
static Form* newRobotomyRequestForm(std::string const &target)
{
    return (new RobotomyRequestForm(target));
}
static Form* newShrubberyCreationForm(std::string const &target)
{
    return (new ShrubberyCreationForm(target));
}

Form *Intern::makeForm(std::string const &form_class, std::string const &target) const
{
    try
    {
        typedef Form* (*f)(std::string const &target);
	    typedef struct 
        {
            std::string form_class;
            f f;
        } form_class_to_func;
    
        form_class_to_func map[] =
        {
  		    {"presidential pardon", &newPresidentialPardonForm},
		    {"robotomy request", &newRobotomyRequestForm},
		    {"shrubbery creation", &newShrubberyCreationForm},
            {"", NULL}
        };
        int i = 0;
        while (map[i].f)
        {
            if (map[i].form_class == form_class)
            {
                std::cout << "Intern creates \"" << form_class << " form\"" << std::endl;
                return (map[i].f(target));
            }
            i++;
        }
        throw (Intern::UnknownFormException(form_class));
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return (NULL);
    }
}

