/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 02:05:05 by amakela           #+#    #+#             */
/*   Updated: 2024/08/05 02:19:55 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *pstr = &str;
    std::string &rstr = str;

    std::cout << "address of str variable: " << &str << std::endl;
    std::cout << "address held by str pointer: " << pstr << std::endl;
    std::cout << "address held by str reference: " << &rstr << std::endl;
    std::cout << "value of str variable: " << str << std::endl;
    std::cout << "value pointed to by str pointer: " << *pstr << std::endl;
    std::cout << "value pointed to by str reference: " << rstr << std::endl;
    return (0);
}
