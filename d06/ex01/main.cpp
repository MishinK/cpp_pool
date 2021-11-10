/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 21:37:50 by ashea             #+#    #+#             */
/*   Updated: 2021/03/25 21:37:52 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main(void)
{
	void* raw = serialize();
	Data* data = deserialize(raw);

    delete reinterpret_cast<Data *>(raw);
	delete data;
}
