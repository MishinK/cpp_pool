/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 20:52:31 by ashea             #+#    #+#             */
/*   Updated: 2021/03/23 20:52:32 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): count(0), list(NULL)
{

}

MateriaSource::~MateriaSource()
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

MateriaSource::MateriaSource(const MateriaSource &materiasource): count(0), list(NULL)
{
    *this = materiasource;
}

MateriaSource &MateriaSource::operator = (const MateriaSource &materiasource)
{
    if (this == &materiasource)
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

    while (materiasource.getCount() > count)
        this->learnMateria(materiasource.getMateria(count)->clone());

    return (*this);
}

int MateriaSource::getCount() const
{
    return (count);
}

AMateria* MateriaSource::getMateria(int idx) const
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

void MateriaSource::learnMateria(AMateria* new_materia)
{
    if (count == 4 || new_materia == NULL)
        return ;
    
    if (list == NULL)
    {
        list = new t_list;
        list->materia = new_materia;
        std::cout << "I learn new materia it is " << new_materia->getType() << std::endl;
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
    std::cout << "I learn new materia it is " << new_materia->getType() << std::endl;
    tmp->next->next = NULL;
    count++;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    t_list *tmp;

    tmp = list;
    while (tmp)
    {
        if (tmp->materia->getType() == type)
        {
            std::cout << "I create clone it is " << type << std::endl;
            return (tmp->materia->clone());
        }
        tmp = tmp->next;
    }
    return (NULL);
}
