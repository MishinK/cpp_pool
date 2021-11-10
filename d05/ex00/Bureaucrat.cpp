/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 03:43:11 by ashea             #+#    #+#             */
/*   Updated: 2021/03/24 03:43:32 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string _name, int _grade): name(_name), grade(_grade)
{
    check_exceptions();
}

Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(Bureaucrat const &bureaucrat): name(bureaucrat.getName()), grade(bureaucrat.getGrade()){}

Bureaucrat &Bureaucrat::operator = (Bureaucrat const &bureaucrat)
{
    if (this == &bureaucrat)
        return (*this);
    grade = bureaucrat.getGrade();
    return (*this);
}

std::string const &Bureaucrat::getName() const
{
    return (name);
}

int Bureaucrat::getGrade() const
{
    return (grade);
}

void Bureaucrat::incrementGrade()
{
    grade--;
    check_exceptions();
}

void Bureaucrat::decrementGrade()
{
    grade++;
    check_exceptions();
}

std::ostream &operator << (std::ostream &out, Bureaucrat const &bureaucrat)
{
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return (out);
}


Bureaucrat::GradeTooHighException::GradeTooHighException(std::string _name) throw() : 
Exception("\x1b[1;31mException Bureaucrat: " + _name + ", grade too high\x1b[0m"){}


Bureaucrat::GradeTooLowException::GradeTooLowException(std::string _name) throw() :
Exception("\x1b[1;31mException Bureaucrat: " + _name + ", grade too low\x1b[0m"){}


void Bureaucrat::check_exceptions()
{
    try
    {
        if (grade < 1)
		    throw (Bureaucrat::GradeTooHighException(name));
	    if (grade > 150)
		    throw (Bureaucrat::GradeTooLowException(name));
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

const char* Exception::what() const throw()
{
	return (name.c_str());
}
