/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exception.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 19:07:45 by ashea             #+#    #+#             */
/*   Updated: 2021/03/24 19:07:47 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Exception.hpp"

Exception::Exception(std::string _name) throw(): name(_name){};

Exception::~Exception() throw(){};

const char* Exception::what() const throw()
{
	return (name.c_str());
}
