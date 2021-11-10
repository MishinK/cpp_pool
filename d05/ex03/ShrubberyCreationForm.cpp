/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 17:53:43 by ashea             #+#    #+#             */
/*   Updated: 2021/03/24 17:53:45 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target):
    Form("Shrubbery Creation Form", 145, 137), target(_target){}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &scform):
    Form(scform), target(scform.target){}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &scform)
{
	(void)scform;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    try
    {
	    Form::execute(executor);
	    
        std::ofstream file;
        file.open(std::string(target + "_shrubbery").c_str(), std::ofstream::out | std::ofstream::app);
        if(file.is_open())
	    {
		    file << "                  #### #### ###    	\n";
            file << "               ### \\/#|### |/####		\n";
            file << "              ##\\/#/ \\||/##/_/##/_#	\n";
            file << "            ###  \\/###|/ \\/ # ###	\n";
            file << "          ##_\\_#\\_\\## | #/###_/_####\n";
            file << "         ## #### # \\ #| /  #### ##/##	\n";
            file << "          __#_--###`  |{,###---###-#	\n";
            file << "         ##      # \\ }///         ##  \n";
            file << "                     }}{				\n";
            file << "                     }}{				\n";
            file << "                     {{}				\n";
            file << "               ,,-=-~{ .-^- _			\n";
            file << "                     `}				\n";
            file << "                      {				\n";
		    file.close();
	    }
    }
    catch(const std::exception& e)
    {
        std::cerr << "Bureaucrat " << executor.getName() << "  action not taken, form - " << this->getName() << std::endl;
    }
}