/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 18:26:45 by ashea             #+#    #+#             */
/*   Updated: 2021/03/23 18:26:53 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
class AMateria;
# include "ICharacter.hpp"

typedef struct      s_list
{
    AMateria        *materia;
    struct s_list   *next;
}                  t_list;

class AMateria
{
public:
    AMateria(std::string const & _type);
    virtual ~AMateria();
    AMateria(const AMateria &amateria);
    AMateria &operator = (const AMateria &amateria);

    std::string const & getType() const;
    unsigned int getXP() const;

    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);

private:
    AMateria();
    std::string type;
    unsigned int xp;

};


#endif
