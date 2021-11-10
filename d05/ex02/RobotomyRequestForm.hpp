/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 17:53:27 by ashea             #+#    #+#             */
/*   Updated: 2021/03/24 17:53:29 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"

class RobotomyRequestForm: public Form
{
public:
    RobotomyRequestForm(std::string target);
    virtual ~RobotomyRequestForm();
    RobotomyRequestForm(RobotomyRequestForm const &rrform);
    RobotomyRequestForm &operator = (RobotomyRequestForm const &rrform);
    
    virtual void execute(Bureaucrat const &executor) const;
private:
    RobotomyRequestForm();
    std::string const target;
};

#endif
