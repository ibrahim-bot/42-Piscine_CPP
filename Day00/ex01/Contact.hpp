/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:09:34 by ichougra          #+#    #+#             */
/*   Updated: 2021/03/16 14:20:52 by ichougra         ###   ########lyon.fr   */
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
    void    addLastname(std::string str);
    void    addNickname(std::string str);
    void    addlogin(std::string str);
    void    addpostal_add(std::string str);
    void    addemail(std::string str);
    void    addphone(std::string str);
    void    addbirthday(std::string str);
    void    addmeal(std::string str);
    void    addunderwear(std::string str);
    void    addsecret(std::string str);
    void	search(Contact phonebook[], int max);
    void    print_contact(Contact phonebook[], int max);
    
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string login;
    std::string postal_add;
    std::string email;
    std::string phone;
    std::string birthday;
    std::string meal;
    std::string underwear;
    std::string secret;
};

#endif