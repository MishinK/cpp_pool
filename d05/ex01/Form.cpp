/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:14:28 by ashea             #+#    #+#             */
/*   Updated: 2021/03/24 13:14:29 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string _name, int _sign_grade, int _execute_grade): name(_name),
sign_grade(_sign_grade), execute_grade(_execute_grade), is_signed(false)
{
    try
    {
        if (sign_grade < 1 || execute_grade < 1)
		    throw (Form::GradeTooHighException(name));
	    if (sign_grade > 150 || execute_grade > 150)
		    throw (Form::GradeTooLowException(name));
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

Form::~Form(){}

Form::Form(Form const &form): name(form.getName()), sign_grade(form.getSignGtade()),
execute_grade(form.getExecuteGrade()), is_signed(form.getIsSigned()){}

Form &Form::operator = (Form const &form)
{
    if (this == &form)
        return (*this);
    is_signed = form.getIsSigned();
    return (*this);
}

std::string const &Form::getName() const
{
    return (name);
}

int  Form::getSignGtade() const
{
    return (sign_grade);
}

int Form::getExecuteGrade() const
{
    return (execute_grade);
}

bool Form::getIsSigned() const
{
    return (is_signed);
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
    try
    {
        if (sign_grade < bureaucrat.getGrade())
            throw (Form::GradeTooLowException(name));
        is_signed = true;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

Form::GradeTooHighException::GradeTooHighException(std::string _name) throw(): 
Exception("\x1b[1;31mException Form: " + _name + ", grade too high\x1b[0m"){}

Form::GradeTooLowException::GradeTooLowException(std::string _name) throw():
Exception("\x1b[1;31mException Form: " + _name + ", grade too low\x1b[0m"){}

std::ostream &operator << (std::ostream &out, Form const &form)
{
    out << "Form: " << form.getName() << " (sign grade = " << form.getSignGtade() <<
    ", execute grade = " << form.getExecuteGrade() << ") is ";
    if (form.getIsSigned())
        out << "signed";
    else
        out << "not signed";
    return (out);
}