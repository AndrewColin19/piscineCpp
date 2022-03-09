/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:45:17 by acolin            #+#    #+#             */
/*   Updated: 2022/03/09 11:23:44 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        void announce(void);
        void setName(std::string name);
        Zombie(std::string name);
        Zombie();
        ~Zombie();
};

Zombie *zombieHorde(int n, std::string name);