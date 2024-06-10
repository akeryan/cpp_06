/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 11:01:19 by akeryan           #+#    #+#             */
/*   Updated: 2024/06/10 16:12:30 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void ScalarConverter::convert(const std::string &str)
{
	std::string			tmp = str;
	char				x_char;
	int					x_int;
	float				x_float;
	double				x_double;	

	if (!str.empty() && str.back() == 'f') {
		tmp.pop_back();
	}

 // conversion to char
	{
		int tmp_int;
		std::stringstream	ss0(tmp);
		if (ss0 >> tmp_int) {
			int test_int = static_cast<int>(tmp_int);
			if (test_int < 0 || test_int > 127)
				std::cout << "char: out of ASCII range" << std::endl;
			else if (test_int <= 32 || test_int == 127)
				std::cout << "char: Non displayable" << std::endl;
			else {
				x_char = test_int;
				std::cout << "char: \'" << x_char << "\'" << std::endl;
			}
		}
		else
			std::cout << "char: impossible" << std::endl;
	}

 // conversion to integer 
	{
		std::stringstream	ss1(tmp);
		if (ss1 >> x_int)
			std::cout << "int: " << x_int << std::endl;
		else
			std::cout << "int: impossible" << std::endl;
	}

 // conversion to float
	{
		//if (tmp == "nan")
			//std::cout << "nanf" << std::endl;
		//else 
		{
			std::stringstream	ss2(tmp);
			if (ss2 >> x_float) {
				int test_int = static_cast<int>(x_float);
				if (x_float - test_int > 0.0 || tmp == "nan")
					std::cout << "float: " << x_float << "f" << std::endl;
				else
					std::cout << "float: " << x_float << ".0f" << std::endl;
			}
			else
				std::cout << "float: impossible" << std::endl;
		}
	}

 // conversion to double
	{
		if (tmp == "nan")
			std::cout << "nan" << std::endl;
		else {
			std::stringstream	ss3(tmp);
			if (ss3 >> x_double) {
				int test_int = static_cast<int>(x_double);
				if (x_double - test_int > 0.0)
					std::cout << "double: " << x_double << std::endl;
				else
					std::cout << "double: " << x_double << ".0" << std::endl;
			}
			else
				std::cout << "double: impossible" << std::endl;
		}
	}
}