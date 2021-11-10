/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 13:00:27 by ashea             #+#    #+#             */
/*   Updated: 2021/03/26 13:00:30 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <string>

class Awesome
{
public:
    Awesome( int n ) : _n( n ) {}
    bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
    bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
    bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
    bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
    bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
    bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
    int _n;
};

int main()
{
    int         i1 = 1, i2 = 2;
    double      d1 = 1.0, d2 = 2.0;
    char        c1 = '1', c2 = '2';
    std::string str1 = "1", str2 = "2";
    Awesome     aw1(1), aw2(2);

    std::cout << "=== TEST INT ===" << std::endl;
    std::cout << "i1 = " << i1 << std::endl;
    std::cout << "i2 = " << i2 << std::endl;
    ::swap(i1, i2);
    std::cout << "i1 = " << i1 << std::endl;
    std::cout << "i2 = " << i2 << std::endl;
    std::cout << "max(i1, i2) = " << ::max(i1, i2) << std::endl;
    std::cout << "min(i1, i2) = " << ::min(i1, i2) << std::endl;
    std::cout << "== TEST DOUBLE ==" << std::endl;
    std::cout << "d1 = " << d1 << std::endl;
    std::cout << "d2 = " << d2 << std::endl;
    ::swap(d1, d2);
    std::cout << "d1 = " << d1 << std::endl;
    std::cout << "d2 = " << d2 << std::endl;
    std::cout << "max(d1, d2) = " << ::max(d1, d2) << std::endl;
    std::cout << "min(d1, d2) = " << ::min(d1, d2) << std::endl;
    std::cout << "=== TEST CHAR ===" << std::endl;
    std::cout << "c1 = " << c1 << std::endl;
    std::cout << "c2 = " << c2 << std::endl;
    ::swap(c1, c2);
    std::cout << "c1 = " << c1 << std::endl;
    std::cout << "c2 = " << c2 << std::endl;
    std::cout << "max(c1, c2) = " << ::max(c1, c2) << std::endl;
    std::cout << "min(c1, c2) = " << ::min(c1, c2) << std::endl;
    std::cout << "== TEST STRING ==" << std::endl;
    std::cout << "str1 = " << str1 << std::endl;
    std::cout << "str2 = " << str2 << std::endl;
    ::swap(str1, str2);
    std::cout << "str1 = " << str1 << std::endl;
    std::cout << "str2 = " << str2 << std::endl;
    std::cout << "max(str1, str2) = " << ::max(str1, str2) << std::endl;
    std::cout << "min(str1, str2) = " << ::min(str1, str2) << std::endl;
    std::cout << "== TEST AWESOME ==" << std::endl;
    std::cout << "aw1 = "  << aw1._n << std::endl;
    std::cout << "aw2 = "  << aw2._n << std::endl;
    ::swap(aw1, aw2);
    std::cout << "aw1 = "  << aw1._n << std::endl;
    std::cout << "aw2 = "  << aw2._n << std::endl;
    std::cout << "max(aw1, aw2) = " << ::max(aw1._n, aw2._n) << std::endl;
    std::cout << "min(aw1, aw2) = " << ::min(aw1._n, aw2._n) << std::endl;
    return(0);
} 