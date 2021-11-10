/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exception.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 16:40:41 by ashea             #+#    #+#             */
/*   Updated: 2021/03/24 16:40:42 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXCEPTION_HPP
# define EXCEPTION_HPP

# include <iostream>
# include <string>

class Exception: public std::exception
{
public:
    Exception(std::string _name) throw(): name(_name){};
    virtual ~Exception() throw(){};
	virtual const char* what() const throw();
private:
    std::string const name;
};

#endif