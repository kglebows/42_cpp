/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:10:11 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/04 20:12:56 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
private:
	Contact			contactList[8];
	int				nrOfContacts;
	int				findLastIndex();
	bool			isPhoneNumber(std::string& str);
	bool			isAlpha(std::string& str);
	std::string		print10(std::string& str);
public:
	PhoneBook();
	~PhoneBook();
	void			addOption();
	void			searchOption();
	std::string		inputFirstName();
	std::string		inputLastName();
	std::string		inputNickname();
	std::string		inputPhoneNumber();
	std::string		inputDarkestSecret();
};

#endif