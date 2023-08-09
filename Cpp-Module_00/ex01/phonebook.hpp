/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ky05h1n <ky05h1n@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:32:04 by ky05h1n           #+#    #+#             */
/*   Updated: 2023/08/05 19:42:20 by ky05h1n          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H


#include <iostream>


#define TRUE 1

class Contact {

        private :

                std::string first_name;
                std::string last_name;
                std::string nick_name;
                std::string phone_number;
                std::string darkest_secret;

        public :
                void storinfo(void);
                void printinfo(int n);
                
                
           
};

class PhoneBook{

        private :

                Contact mydata[8];
        public :
                
                void addinfo(int i);
                void showinfo(int n);

};

void printerror(std::string option);
void start(void);
std::string trancword(std::string& input);


#endif