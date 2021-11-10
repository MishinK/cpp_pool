/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 19:34:25 by ashea             #+#    #+#             */
/*   Updated: 2021/03/23 19:34:26 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string _name): name(_name), count(0), list(NULL)
{

}

Character::~Character()
{
    t_list *tmp;
    tmp = list;
    while (count)
    {
        tmp = list->next;
        delete list->materia;
        delete list;
        list = tmp;
        count--;
    }
}

Character::Character(const Character &character): name(character.getName()), count(0), list(NULL)
{
    *this = character;
}

Character &Character::operator = (const Character &character)
{
    if (this == &character)
        return (*this);
    
    t_list *tmp;
    
    tmp = list;
    while (count)
    {
        tmp = list->next;
        delete list->materia;
        delete list;
        list = tmp;
        count--;
    }

    while (character.getCount() > count)
        this->equip(character.getMateria(count)->clone());

    return (*this);
}

std::string const &Character::getName() const
{
    return(name);
}

int Character::getCount() const
{
    return(count);
}

AMateria* Character::getMateria(int idx) const
{
    if (idx < 0 || idx > count - 1)
        return (NULL);
    
    t_list *tmp;

    tmp = list;
    while (idx > 0)
    {
        tmp = tmp->next;
        idx--;
    }
    return (tmp->materia);
}

void Character::equip(AMateria* new_materia)
{
    if (count == 4 || new_materia == NULL)
        return ;
    
    if (list == NULL)
    {
        list = new t_list;
        list->materia = new_materia;
        list->next = NULL;
        count = 1;
        return ;
    }

    t_list *tmp;

    tmp = list;
    while (tmp->next)
    {
        if (tmp->materia == new_materia)
            return ;
        tmp = tmp->next;
    }
    tmp->next = new t_list;
    tmp->next->materia = new_materia;
    tmp->next->next = NULL;
    count++;
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > count - 1)
        return;
    
    if (idx == 0)
        list = list->next;
    if (idx == 1)
        list->next = list->next->next;
    if (idx == 2)
        list->next->next = list->next->next->next;
    if (idx == 3)
        list->next->next->next = list->next->next->next->next;
    
    count--;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > count - 1)
        return ;
    getMateria(idx)->use(target);
}