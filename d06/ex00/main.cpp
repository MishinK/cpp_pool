/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 18:52:06 by ashea             #+#    #+#             */
/*   Updated: 2021/03/25 18:52:07 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

int main(int argc, char **argv)
{
    ScalarConversion sc; 

    if (argc == 2)
        sc.convert(argv[1]);
    else
        std::cerr << "Error: one argument expected." << std::endl;
    return (0);
}
