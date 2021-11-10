/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 22:46:59 by ashea             #+#    #+#             */
/*   Updated: 2021/03/22 22:47:01 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

typedef struct      s_list
{
    ISpaceMarine    *unit;
    struct s_list   *next;
}                  t_list;

class Squad: public ISquad
{
public:
    Squad();
    virtual ~Squad();
    Squad(const Squad &squad);
    Squad &operator = (const Squad &squad);

    virtual int getCount() const;
    virtual ISpaceMarine* getUnit(int index) const;
    virtual int push(ISpaceMarine* new_unit);
private:
    int count;
    t_list *list;
};
#endif
