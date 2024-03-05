/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:10:11 by kglebows          #+#    #+#             */
/*   Updated: 2024/03/05 11:13:11 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iomanip>
# include <cstdlib>

class PhoneBook {
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
