/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 19:05:17 by ashea             #+#    #+#             */
/*   Updated: 2021/03/26 19:05:18 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>

int main()
{
    int f = 42;

    try
    {
        std::vector<int> vec;

        vec.push_back(100);
        vec.push_back(-1);
        vec.push_back(42);

        easyfind(vec, f);
        std::cout << "Find: " << *easyfind(vec, f) << std::endl;
    }
    catch(char const* &e)
    {
        std::cerr << e << '\n';
    }
    try
    {
        std::list<int> list;

        list.push_back(100);
        list.push_back(-1);
        list.push_back(42);
        easyfind(list, f);
        std::cout << "Find: " << *easyfind(list, f) << std::endl;
    }
    catch(char const* &e)
    {
        std::cerr << e << '\n';
    }
    try
    {
        std::deque<int> deq;

        deq.push_back(100);
        deq.push_back(-1);
        deq.push_back(42);
        easyfind(deq, f);
        std::cout << "Find: " << *easyfind(deq, f) << std::endl;
    }
    catch(char const* &e)
    {
        std::cerr << e << '\n';
    }
    return (0);
}
