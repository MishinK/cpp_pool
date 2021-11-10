/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 18:52:16 by ashea             #+#    #+#             */
/*   Updated: 2021/03/25 18:52:18 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

ScalarConversion::ScalarConversion(){}

ScalarConversion::~ScalarConversion(){}

ScalarConversion::ScalarConversion(ScalarConversion const &sc){(void)sc;}

ScalarConversion &ScalarConversion::operator = (ScalarConversion const &sc){(void)sc; return(*this);}

float ScalarConversion::to_impossible(std::string const &str)
{
	float f;
	try
	{	
		if (str.size() == 3 && str[0] == '\'' && str[2] == '\'')
			return (static_cast<float>(str[1]));
		f = std::stof(str);
	}
	catch (const std::exception& e)
    { 
        throw(e);
    }
	return (f);
}

char ScalarConversion::to_char(float f)
{
	if (std::isnan(f) || f == std::numeric_limits<float>::infinity() || f == -std::numeric_limits<float>::infinity())
        throw (std::string("impossible"));
	else if (static_cast<char>(f) < 32 || static_cast<char>(f) > 126)
		throw (std::string("Non displayable"));
	return (static_cast<char>(f));
}

int ScalarConversion::to_int(float f)
{
    if (std::isnan(f) || f == std::numeric_limits<float>::infinity() || f == -std::numeric_limits<float>::infinity())
		throw (std::string("impossible"));
	return (static_cast<int>(f));
}
float ScalarConversion::to_float(float f)
{
    return (static_cast<float>(f));
}
double ScalarConversion::to_double(float f)
{
    return (static_cast<double>(f));
}


void ScalarConversion::convert(std::string const &str)
{
	float f;

	try
    {
        f = to_impossible(str);
    }
    catch (const std::exception& e)
    {
        std::cerr << "The conversion is impossible" << std::endl;;
        return ;
    }
    try
    {
        char c = to_char(f);
        std::cout << "char : '" << c << "'" << std::endl;
    }
    catch (const std::string& e)
    {
        std::cerr << "char : " << e << std::endl;
    }
	try
    {
		int i = to_int(f);
		std::cout << "int : " << i << std::endl;
    }
    catch (const std::string& e)
    {
        std::cerr << "int : " << e << std::endl;
    }
    f = to_float(f);
    if (f - (int)f != (float)0)
        std::cout << "float : " << f << "f" << std::endl;
    else
		std::cout << "float : " << f << ".0f" << std::endl;
	double d = to_double(f);
    if (d - (int)d != (double)0)
        std::cout << "double : " << d << std::endl;
    else
        std::cout << "double : " << d << ".0" << std::endl;
}