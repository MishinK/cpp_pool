/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 16:29:38 by ashea             #+#    #+#             */
/*   Updated: 2021/03/27 16:29:40 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <list>

int main()
{
    MutantStack<int> mstack;
    std::list<int> list;

    mstack.push(5);
    mstack.push(17);
    
    list.push_back(5);
    list.push_back(17);

    std::cout << mstack.top() << " " << list.back() << std::endl;

    mstack.pop();
    list.pop_back();

    std::cout << mstack.size() << " " << list.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);

    list.push_back(3);
    list.push_back(5);
    list.push_back(737);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    std::list<int>::iterator it2 = list.begin();
    std::list<int>::iterator ite2 = list.end();

    ++it;
    --it;

    ++it2;
    --it2;
    std::cout << " MutantStack \n";
    while (it != ite)
    {
        std::cout << *it << " ";
        ++it; 
    }
    std::cout << "\n list \n";
    while (it2 != ite2)
    {
        std::cout << *it2 << " ";
        ++it2; 
    }

    std::stack<int> s(mstack);

    return 0;
}
