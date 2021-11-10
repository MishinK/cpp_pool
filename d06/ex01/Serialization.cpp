/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 21:38:11 by ashea             #+#    #+#             */
/*   Updated: 2021/03/25 21:38:13 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

static const int packet_length = 6;

void *serialize(void)
{
	Data *data = new Data;
	std::string alphabet;
    alphabet = "0123456789";
    alphabet += "abcdefghijklmnopqrstuvwxyz";
    alphabet += "ABCDEFGHIJKLMOPQRSTUVXYZ";

    srand(time(NULL));
	std::cout << "==== SERIALIZE ====" << std::endl;
	for (int i = 0; i < packet_length; i++)
		data->first_ptr_to_random_str += alphabet[rand() % alphabet.size()];
	std::cout << "S1 = " << data->first_ptr_to_random_str << std::endl;
    for (int i = 0; i < packet_length; i++)
        data->random_int = data->random_int * 10 + (rand() % 9) + 1;
	std::cout << "N  = " << data->random_int << std::endl;
	for (int i = 0; i < packet_length; i++)
		data->second_ptr_to_random_str += alphabet[rand() % alphabet.size()];
	std::cout << "S2 = " << data->second_ptr_to_random_str << std::endl;
	return (reinterpret_cast<void*>(data));
}

Data *deserialize(void *raw)
{
	Data *data = new Data;

    std::cout << "=== DESERIALIZE ===" << std::endl;
	data->first_ptr_to_random_str = (std::string(reinterpret_cast<char *>(raw), packet_length + 1));
    std::cout << "S1 = " << data->first_ptr_to_random_str << std::endl;
	data->random_int = *(reinterpret_cast<int*>(raw) + 6);
    std::cout << "N  = " << data->random_int << std::endl;
	data->second_ptr_to_random_str = (std::string(reinterpret_cast<char *>(raw) + 32,  packet_length + 1));
    std::cout << "S2 = " << data->second_ptr_to_random_str << std::endl;
	return (data);
}
