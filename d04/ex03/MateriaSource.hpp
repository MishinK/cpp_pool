/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 20:52:41 by ashea             #+#    #+#             */
/*   Updated: 2021/03/23 20:52:42 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
public:
    MateriaSource();
    virtual ~MateriaSource();
    MateriaSource(const MateriaSource &materiasource);
    MateriaSource &operator = (const MateriaSource &materiasource);

    int getCount() const;
    AMateria* getMateria(int idx) const;

    virtual void learnMateria(AMateria* new_materia);
    virtual AMateria* createMateria(std::string const & type);
private:
    int count;
	t_list *list;
};

#endif


