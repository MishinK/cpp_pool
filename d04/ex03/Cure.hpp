/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 19:02:32 by ashea             #+#    #+#             */
/*   Updated: 2021/03/23 19:02:33 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria
{
public:
    Cure();
    virtual ~Cure();
    Cure(const Cure &cure);
    Cure &operator = (const Cure &cure);
    
    virtual Cure* clone() const;
    virtual void use(ICharacter& target);
};



#endif
