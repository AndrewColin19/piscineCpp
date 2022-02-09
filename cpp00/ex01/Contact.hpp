/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolin <acolin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 14:02:07 by acolin            #+#    #+#             */
/*   Updated: 2022/02/09 17:13:45 by acolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

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

	std::string getfname(void) const;
	std::string getlname(void) const;
	std::string getnickname(void) const;
	std::string getphoneNumber(void) const;
	std::string getdsecret(void) const;

	std::string getInfo(void) const;
};
