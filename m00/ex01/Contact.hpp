/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:09:29 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/04 20:10:21 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
private:
	// int				index;
	std::string		firstName;
	std::string		lastName;
	std::string		nickname;
	std::string		phoneNumber;
	std::string		darkestSecret;
public:
	Contact();
	~Contact();
	std::string&	getFirstName();
	std::string&	getLastName();
	std::string&	getNickname();
	std::string&	getPhoneNumber();
	std::string&	getDarkestSecret();
	void			setFirstName(std::string s);
	void			setLastName(std::string s);
	void			setNickname(std::string s);
	void			setPhoneNumber(std::string s);
	void			setDarkestSecret(std::string s);
};



#endif
