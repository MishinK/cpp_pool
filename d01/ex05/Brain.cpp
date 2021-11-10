/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 00:56:27 by ashea             #+#    #+#             */
/*   Updated: 2021/03/19 00:56:29 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    weight = 0;
    intelligence = 0;
    std::cout << "Brain start" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain finish" << std::endl;
}

std::string Brain::identify()
{
    std::stringstream str;
    str << (void *)this;
    return (str.str());
}