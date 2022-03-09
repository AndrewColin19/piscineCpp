/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 11:41:04 by acolin            #+#    #+#             */
/*   Updated: 2022/03/09 13:48:28 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
    std::string v = "HI THIS IS BRAIN";
    std::string *stringPTR = &v;
    std::string &stringREF = v;

    std::cout << "adr string : " << &v << std::endl;
    std::cout << "adr stringPTR : " << &stringPTR << std::endl;
    std::cout << "adr stringREF : " << &stringREF << std::endl;

    std::cout << "valeur string : " << v << std::endl;
    std::cout << "valeur stringPTR : " << *stringPTR << std::endl;
    std::cout << "valeur stringREF : " << stringREF << std::endl;
    return (1);
}
