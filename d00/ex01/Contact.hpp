/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 19:17:45 by ashea             #+#    #+#             */
/*   Updated: 2021/03/18 19:17:53 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
    public:
        void create(std::string data[10]);
        void get_name();
        void get_contact();
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string login;
        std::string postal_address;
        std::string email_address;
        std::string phone_number;
        std::string favorite_meal;
        std::string darkest_secret;
        std::string format(std::string str);
};

#endif