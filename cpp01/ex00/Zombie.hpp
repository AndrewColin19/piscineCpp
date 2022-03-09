/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 10:45:17 by acolin            #+#    #+#             */
/*   Updated: 2022/03/09 13:36:57 by acolin           ###   ########.fr       */
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
        Zombie(std::string name);
        ~Zombie(void);
};

Zombie *newZombie(std::string name);
void    randomChump(std::string name);
