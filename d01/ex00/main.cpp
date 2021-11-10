/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 12:13:43 by ashea             #+#    #+#             */
/*   Updated: 2021/01/19 12:13:51 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheStack()
{
    Pony pony_stack("Stack");
    pony_stack.get_name();
    std::cout << "exit ponyOnTheStack" << std::endl;
}

void ponyOnTheHeap()
{
    Pony *pony_heap = new Pony("Heap");
    (*pony_heap).get_name();
    delete pony_heap;
    pony_heap = 0;
    std::cout << "exit ponyOnTheHeap" << std::endl;
}

int main()
{
    ponyOnTheStack();
    ponyOnTheHeap();
    return (0);
}
