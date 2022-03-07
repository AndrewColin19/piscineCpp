/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:02:07 by acolin            #+#    #+#             */
/*   Updated: 2022/03/07 19:46:02 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include <iomanip>

class Contact
{
private:
	std::string fname;
	std::string lname;
	std::string nickname;
	std::string phoneNumber;
	std::string dsecret;
public:
	Contact(void);
	~Contact(void);
	void setfname(std::string fname);
	void setlname(std::string lname);
	void setnickname(std::string nickname);
	void setphoneNumber(std::string phoneNumber);
	void setdsecret(std::string dsecret);
	void aff(void) const;

	std::string getfname(void) const;
	std::string getlname(void) const;
	std::string getnickname(void) const;
	std::string getphoneNumber(void) const;
	std::string getdsecret(void) const;

	std::string get_ten_c(std::string str) const;
	std::string getInfo(void) const;
};
