/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 16:56:28 by amakela           #+#    #+#             */
/*   Updated: 2024/08/14 21:50:01 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Copier.hpp"

int	main(int argc, char** argv) {
	if (argc != 4) {
		std::cout << "Error: invalid arguments" << std::endl;
		return (1);
	}
	Copier	copier;
	if (!copier.openInFile(argv[1]))
		return 1;
	if (!copier.openOutFile(argv[1]))
		return 1;
	copier.copyAndReplace(argv[2], argv[3]);
	return 0;
}
