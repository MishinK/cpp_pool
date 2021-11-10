/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 19:19:50 by ashea             #+#    #+#             */
/*   Updated: 2021/03/18 19:19:54 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::create(std::string data[10])
{
    first_name = data[0];
    last_name = data[1];
    nickname = data[2];
    login = data[3];
    postal_address = data[4];
    email_address = data[5];
    phone_number = data[6];
    favorite_meal = data[7];
    darkest_secret = data[8];
}

std::string Contact::format(std::string str)
{
    std::string fstr;
    
    if (str.size() > 10)
        fstr = str.substr(0, 9) + ".";
    else
    {
        for (int i = 0; str.size() + i < 10; i++)
            fstr += " ";
        fstr += str;
    }
    return (fstr);
}

void Contact::get_name()
{
    std::cout << "|" << format(first_name) << "|" << format(last_name) << "|" << format(nickname) << "|" << std::endl;
}

void Contact::get_contact()
{
    std::cout << "first_name is     " << first_name << std::endl;
    std::cout << "last_name is      " << last_name << std::endl;
    std::cout << "nickname is       " << nickname << std::endl;
    std::cout << "login is          " << login << std::endl;
    std::cout << "postal_address is " << postal_address << std::endl;
    std::cout << "email_address is  " << email_address << std::endl;
    std::cout << "phone_number is   " << phone_number << std::endl;
    std::cout << "favorite_meal is  " << favorite_meal << std::endl;
    std::cout << "darkest_secret is " << darkest_secret << std::endl;
}
