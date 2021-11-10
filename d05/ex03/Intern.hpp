/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 20:54:10 by ashea             #+#    #+#             */
/*   Updated: 2021/03/24 20:54:12 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include <functional>

class Intern
{
public:
	Intern();
    ~Intern();
	Intern(Intern const &intern);
    Intern &operator=(Intern const &intern);

    Form *makeForm(std::string const &formName, std::string const &target) const;

	class UnknownFormException: public Exception{
	public:
        UnknownFormException(std::string _name) throw();
        virtual ~UnknownFormException() throw(){};
    };

};

#endif
