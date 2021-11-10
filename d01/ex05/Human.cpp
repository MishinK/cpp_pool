/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 00:56:44 by ashea             #+#    #+#             */
/*   Updated: 2021/03/19 00:56:46 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
    std::cout << "Human start" << std::endl;
}

Human::~Human()
{
    std::cout << "Human finish" << std::endl;
}

std::string Human::identify()
{
    std::stringstream str;
    str << (void *)this;
    return (str.str());
}

Brain& Human::getBrain()
{
    return (this->brain);
}