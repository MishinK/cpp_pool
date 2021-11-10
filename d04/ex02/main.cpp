/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 00:42:52 by ashea             #+#    #+#             */
/*   Updated: 2021/03/23 00:42:56 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main (void)
{
    {
        ISpaceMarine* bob = new TacticalMarine;
        ISpaceMarine* jim = new AssaultTerminator;
    
        ISquad* vlc = new Squad;
    
        vlc->push(bob);
        vlc->push(jim);

        for (int i = 0; i < vlc->getCount(); ++i)
        {
            ISpaceMarine* cur = vlc->getUnit(i);
            cur->battleCry();
            cur->rangedAttack();
            cur->meleeAttack();
        }
        delete vlc;
    }
    {
        std::cout << std::endl;
        std::cout << std::endl << "MY TEST " << std::endl;
	    Squad* sq1 = new Squad;
	    ISpaceMarine* a = new TacticalMarine;
	    ISpaceMarine* b = new AssaultTerminator;
        ISpaceMarine* c = new AssaultTerminator;

	    sq1->push(a);
	    sq1->push(b);

	    std::cout << std::endl << "COPY CONSTRUCTOR: " << std::endl;
	    Squad sq2(*sq1);

	    std::cout << std::endl << "SQ1: " << std::endl;
	    for(int i = 0; i < sq1->getCount(); i++) {
	    	std::cout << "UNIT #" << i+1 << std::endl;
	    	ISpaceMarine* cur = sq1->getUnit(i);
	    	cur->battleCry();
	    	cur->rangedAttack();
	    	cur->meleeAttack();
	    	std::cout << cur << std::endl;
	    }
	
	    std::cout << std::endl << "SQ2: " << std::endl;
	    for(int i = 0; i < sq2.getCount(); i++) {
		    std::cout << "UNIT #" << i+1 << std::endl;
		    ISpaceMarine* cur = sq2.getUnit(i);
		    cur->battleCry();
		    cur->rangedAttack();
		    cur->meleeAttack();
		    std::cout << cur << std::endl;
	    }

        std::cout << std::endl << "ASSIGN = " << std::endl;
        sq1->push(c);
        sq1->push(a);
        sq2 = *sq1;
    
        std::cout << std::endl << "SQ1: " << std::endl;
	    for(int i = 0; i < sq1->getCount(); i++) {
		    std::cout << "UNIT #" << i+1 << std::endl;
		    ISpaceMarine* cur = sq1->getUnit(i);
		    cur->battleCry();
		    cur->rangedAttack();
		    cur->meleeAttack();
		    std::cout << cur << std::endl;
	    }
	
	    std::cout << std::endl << "SQ2: " << std::endl;
	    for(int i = 0; i < sq2.getCount(); i++) {
	    	std::cout << "UNIT #" << i+1 << std::endl;
	    	ISpaceMarine* cur = sq2.getUnit(i);
	    	cur->battleCry();
		    cur->rangedAttack();
		    cur->meleeAttack();
		    std::cout << cur << std::endl;
	    }

        delete sq1;

    }

    return (0);
}
