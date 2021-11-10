/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 18:52:26 by ashea             #+#    #+#             */
/*   Updated: 2021/03/25 18:52:28 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERSION_HPP
# define SCALARCONVERSION_HPP

# include <iostream>
# include <string>
# include <cmath> 

class ScalarConversion
{
public:
    ScalarConversion();
    ~ScalarConversion();
    ScalarConversion(ScalarConversion const &sc);
    ScalarConversion &operator = (ScalarConversion const &sc);

    void convert(std::string const &str);

private:
    float to_impossible(std::string const &str);
    char to_char(float f);
    int to_int(float f);
    float to_float(float f);
    double to_double(float f);
};

#endif 
