/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 19:34:16 by ashea             #+#    #+#             */
/*   Updated: 2021/03/23 19:34:18 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character: public ICharacter
{
public:
    Character(std::string _name);
    virtual ~Character();
    Character(const Character &character);
    Character &operator = (const Character &character);

    virtual std::string const & getName() const;
    int getCount() const;
    AMateria* getMateria(int idx) const;
    
    virtual void equip(AMateria* new_materia);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
private:
    Character();
    std::string name;
    int         count;
    t_list      *list;
};

#endif
