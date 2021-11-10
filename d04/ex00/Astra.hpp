/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Astra.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 16:47:05 by ashea             #+#    #+#             */
/*   Updated: 2021/03/22 16:47:09 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASTRA_HPP
# define ASTRA_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Astra: public Victim
{
public:
    Astra(std::string _name);
    virtual ~Astra();
    Astra(const Astra &astra);
    Astra &operator = (const Astra &astra);

    virtual void getPolymorphed() const;
private:
    Astra();
};

#endif
