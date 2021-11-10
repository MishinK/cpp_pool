/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 21:35:27 by ashea             #+#    #+#             */
/*   Updated: 2021/03/23 21:35:28 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"


int main()
{
    {
        std::cout << "0-------------" << std::endl;
        IMateriaSource* src = new MateriaSource();

        src->learnMateria(new Ice());
        src->learnMateria(new Cure());

        std::cout << "1-------------" << std::endl;
        ICharacter* me = new Character("me");
        AMateria* tmp;

        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);

        std::cout << "2-------------" << std::endl;
        ICharacter* bob = new Character("bob");

        me->use(0, *bob);
        me->use(1, *bob);

        std::cout << "3-------------" << std::endl;
        delete bob;
        delete me;
        std::cout << "4-------------" << std::endl;
        delete src;
    }
    {
        std::cout << "--TEST COPY CONSTRUCTOR--" << std::endl;
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());

        Character me("me");

        me.equip(src->createMateria("ice"));
        me.equip(src->createMateria("xz"));
        
        Character you(me);
        you.use(0, me);
        you.use(1, me);

        me.equip(src->createMateria("cure"));
        you = me;
        std::cout << "--TEST DESTRUCTOR--" << std::endl;
    }

    return (0);
}