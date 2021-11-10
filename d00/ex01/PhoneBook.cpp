/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 00:06:46 by ashea             #+#    #+#             */
/*   Updated: 2021/01/19 00:06:48 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    count_contacts = 0;
}

void PhoneBook::add()
{
    std::string data[9];
    
    if (count_contacts < 8)
    {
        std::cout << "first_name is     ";
        std::cin >> data[0];
        std::cout << "last_name is      ";
        std::cin >> data[1];
        std::cout << "nickname is       ";
        std::cin >> data[2];
        std::cout << "login is          ";
        std::cin >> data[3];
        std::cout << "postal_address is ";
        std::cin >> data[4];
        std::cout << "email_address is  ";
        std::cin >> data[5];
        std::cout << "phone_number is   ";
        std::cin >> data[6];
        std::cout << "favorite_meal is  ";
        std::cin >> data[7];
        std::cout << "darkest_secret is ";
        std::cin >> data[8];
        std::cout << "contact added successfully" << std::endl;
        (contacts[count_contacts]).create(data);
        count_contacts++;
    }
    else
        std::cout << "memory is over" << std::endl;
}

void PhoneBook::search()
{
    int i = 0;
    int index;
    
    if (count_contacts == 0)
        std::cout << "no contacts" << std::endl;
    else
    {
        while (i < count_contacts)
        {
            std::cout << i + 1 << ")";
            (contacts[i]).get_name();
            i++;
        }
        std::cout << "write index" << std::endl;
        std::cin >> index;
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(32767,'\n');
            std::cout << "wrong index" << std::endl;
        }
        else
        {
            if (index > 0 && index <= count_contacts)
                (contacts[index-1]).get_contact();
            else
                std::cout << "wrong index" << std::endl;
        }
    }
}