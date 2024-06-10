/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:12:47 by akeryan           #+#    #+#             */
/*   Updated: 2024/06/10 13:15:58by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2) {
		std::cout << "Exactly one argument is expected" << std::endl;
		return 1;
	}

	ScalarConverter::convert(argv[1]);

	return 0;
}