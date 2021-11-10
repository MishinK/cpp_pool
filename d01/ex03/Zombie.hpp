/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 00:40:53 by ashea             #+#    #+#             */
/*   Updated: 2021/03/19 00:40:54 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>

class Zombie{
public:
    Zombie();
    Zombie(std::string z_name, std::string z_type);
    ~Zombie();
    void announce();
private:
    std::string random_name();
    std::string name;
    std::string type;
};

#endif
