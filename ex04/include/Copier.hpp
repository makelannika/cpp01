/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Copier.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 19:15:35 by amakela           #+#    #+#             */
/*   Updated: 2024/08/13 19:52:20 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
# define FILE_HPP

#include <string>
#include <fstream>
#include <iostream>

class Copier {
    private:
        std::ifstream   in;
        std::ofstream   out;

    public:
        ~Copier();

        bool    openInFile(char *filename);
        bool    openOutFile(char *filename);
        void    copyAndReplace(char *to_replace, char *replacement);
};

#endif
