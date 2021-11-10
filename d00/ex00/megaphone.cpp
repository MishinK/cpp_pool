/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 14:11:13 by ashea             #+#    #+#             */
/*   Updated: 2021/01/18 14:39:26 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Megaphone
{
	public:
        Megaphone(int argc, char **argv);
		std::string voice();
	private:
		std::string value;
};

Megaphone::Megaphone(int argc, char **argv)
{
    int i = 0;
    
	if (argc > 1)
    {
        while(argc > 1)
        {
            argc--;
            value = argv[argc] + value;
        }
        while (value[i])
        {
            if (std::islower(value[i]))
                value[i] = std::toupper(value[i]);
            i++;
        }
    }
    else
        value = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
}

std::string Megaphone::voice()
{
	return (value);
}

int main(int argc, char **argv)
{
	Megaphone megaphone(argc, argv);
	std::cout << megaphone.voice() << std::endl;
	return (0);
}

