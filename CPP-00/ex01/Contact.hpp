/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:09:34 by ichougra          #+#    #+#             */
/*   Updated: 2021/03/15 15:07:36 by ichougra         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact {

public:

    Contact();
    ~Contact();

    void    addFirstname(std::string str);

private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string login;
    std::string postal_add;
    std::string email;
    std::string phone;
    std::string birthday;
    std::string favorite_meal;
    std::string underwear;
    std::string secret;

};

Contact	add_contact();

#endif