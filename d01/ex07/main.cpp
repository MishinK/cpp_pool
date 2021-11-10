/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 01:15:29 by ashea             #+#    #+#             */
/*   Updated: 2021/03/19 01:15:31 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc != 4)
    {
        std::cerr << "error: wrong number of arguments: expected 3" << std::endl;
        return (-1);
    }

    std::string str1;
	std::string str2;
    str1 = argv[2];
    str2 = argv[3];
	if (str1.empty() || str2.empty())
    {
        std::cerr << "error: nonempty lines expected" << std::endl;
        return (-2);
    }
    std::string file;
    file = argv[1];

    std::ifstream ifs;
    ifs.open(file, std::ifstream::in);
	if (!ifs)
    {
        std::cerr << "error: file cannot be read" << std::endl;
        return (-3);
    }
	std::streampos len;
    ifs.seekg(0,std::ios::end);
    len = ifs.tellg();
    ifs.seekg(0,std::ios::beg);

    std::string tmp;
	tmp.resize(len);
	ifs.read(&tmp[0],len);
	while (tmp.find(str1) != std::string::npos)
		tmp.replace(tmp.find(str1), str1.length(), str2);
	ifs.close();

	std::ofstream ofs;
    ofs.open(file.append(".replace"), std::ofstream::out | std::ofstream::trunc);
	if (!ofs)
    {
        std::cerr << "error: file cannot be create" << std::endl;
        return (-4);
    }
	ofs << tmp;
	ofs.close();

	return (0);
}