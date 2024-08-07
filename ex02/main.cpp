/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 02:05:05 by amakela           #+#    #+#             */
/*   Updated: 2024/08/07 12:46:28 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *str_ptr = &str;
    std::string &str_ref = str;

    std::cout << "address of str variable: " << &str << std::endl;
    std::cout << "address held by str pointer: " << str_ptr << std::endl;
    std::cout << "address held by str reference: " << &str_ref << std::endl;
	std::cout << std::endl;
    std::cout << "value of str variable: " << str << std::endl;
    std::cout << "value pointed to by str pointer: " << *str_ptr << std::endl;
    std::cout << "value pointed to by str reference: " << str_ref << std::endl;
    return (0);
}
