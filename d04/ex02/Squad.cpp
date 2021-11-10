/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 22:46:47 by ashea             #+#    #+#             */
/*   Updated: 2021/03/22 22:46:48 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(): count(0), list(NULL)
{
}

Squad::~Squad()
{
    t_list *tmp;
    tmp = list;
    while (count)
    {
        tmp = list->next;
        delete list->unit;
        delete list;
        list = tmp;
        count--;
    }
}

Squad::Squad(const Squad &squad): count(0), list(NULL)
{
    *this = squad;
}

Squad &Squad::operator = (const Squad &squad)
{
    if (this == &squad)
        return (*this);
    
    t_list *tmp;
    
    tmp = list;
    while (count)
    {
        tmp = list->next;
        delete list->unit;
        delete list;
        list = tmp;
        count--;
    }

    while (squad.getCount() > count)
        this->push(squad.getUnit(count)->clone());

    return (*this);
}

int Squad::getCount() const
{
    return (count);
}

ISpaceMarine* Squad::getUnit(int index) const
{
    if (index < 0 || index > count - 1)
        return (NULL);
    
    t_list *tmp;

    tmp = list;
    while (index > 0)
    {
        tmp = tmp->next;
        index--;
    }
    return (tmp->unit);
}

int Squad::push(ISpaceMarine* new_unit)
{
    if (new_unit == NULL)
        return (count);
    
    if (list == NULL)
    {
        list = new t_list;
        list->unit = new_unit;
        list->next = NULL;
        return (count = 1);
    }

    t_list *tmp;

    tmp = list;
    while (tmp->next)
    {
        if (tmp->unit == new_unit)
            return (count);
        tmp = tmp->next;
    }
    tmp->next = new t_list;
    tmp->next->unit = new_unit;
    tmp->next->next = NULL;
    return (++count);
}
