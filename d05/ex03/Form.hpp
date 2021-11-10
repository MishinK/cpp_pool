/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:14:35 by ashea             #+#    #+#             */
/*   Updated: 2021/03/24 13:14:36 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

class Form;
# include "Bureaucrat.hpp"
# include "Exception.hpp"

class Form
{
public:
    Form(std::string _name, int _sign_grade, int _execute_grade);
    ~Form();
    Form(Form const &form);
    Form &operator = (Form const &form);

    std::string const &getName() const;
    int  getSignGtade() const;
    int getExecuteGrade() const;
    bool getIsSigned() const;

    void beSigned(Bureaucrat const &bureaucrat);
    virtual void execute(Bureaucrat const &executor) const = 0;

    class GradeTooHighException: public Exception
    {
    public:
        GradeTooHighException(std::string _name) throw();
        virtual ~GradeTooHighException() throw() {};
	};
	
    class GradeTooLowException: public Exception
    {
    public:
        GradeTooLowException(std::string _name) throw();
        virtual ~GradeTooLowException() throw() {};
	};

    class UnsignedFormException: public Exception
    {
    public:
        UnsignedFormException(std::string _name) throw();
        virtual ~UnsignedFormException() throw() {};
	};

private:
    Form();
    std::string const name;
    int const sign_grade;
    int const execute_grade;
    bool is_signed;
};

std::ostream &operator << (std::ostream &out, Form const &form);

#endif