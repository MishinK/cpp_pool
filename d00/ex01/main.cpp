/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 19:28:08 by ashea             #+#    #+#             */
/*   Updated: 2021/03/18 19:28:10 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    std::string command;
    PhoneBook phonebook;
    
    while (1)
    {
        std::cin >> command;
        if (command == "EXIT")
            break;
        if (command == "ADD")
            phonebook.add();
        if (command == "SEARCH")
            phonebook.search();
        if (command != "EXIT" && command != "ADD" && command != "SEARCH")
            std::cout << "wrong command, use: ADD, SEARCH, EXIT" << std::endl;
    }
    return (0);
}
