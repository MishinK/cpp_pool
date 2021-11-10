/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 03:42:48 by ashea             #+#    #+#             */
/*   Updated: 2021/03/24 03:42:50 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

# include "Exception.hpp"
class Bureaucrat;
# include "Form.hpp"

class Bureaucrat
{
public:
    Bureaucrat(std::string _name, int _grade);
    ~Bureaucrat();
    Bureaucrat(Bureaucrat const &bureaucrat);
    Bureaucrat &operator = (Bureaucrat const &bureaucrat);

    std::string const &getName() const;
    int getGrade() const;

    void incrementGrade();
    void decrementGrade();

    void signForm(Form &form);
    void executeForm(Form const & form);

    class GradeTooHighException: public Exception
    {
    public:
        GradeTooHighException(std::string _name) throw();
        virtual ~GradeTooHighException() throw(){};
    };

    class GradeTooLowException: public Exception
    {
    public:
      GradeTooLowException(std::string _name) throw();
      virtual ~GradeTooLowException() throw(){};
    };

private:
    Bureaucrat();
    std::string const name;
    int grade;
    void check_exceptions();
};

std::ostream &operator << (std::ostream &out, Bureaucrat const &bureaucrat);


#endif
