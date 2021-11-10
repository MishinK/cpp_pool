/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 17:53:03 by ashea             #+#    #+#             */
/*   Updated: 2021/03/24 17:53:05 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"

class PresidentialPardonForm: public Form
{
public:
    PresidentialPardonForm(std::string _target);
    virtual ~PresidentialPardonForm();
    PresidentialPardonForm(PresidentialPardonForm const &ppform);
    PresidentialPardonForm &operator = (PresidentialPardonForm const &ppform);
    
    virtual void execute(Bureaucrat const &executor) const;
private:
    PresidentialPardonForm();
    std::string const target;
};

#endif