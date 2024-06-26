/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 11:01:19 by akeryan           #+#    #+#             */
/*   Updated: 2024/06/11 18:06:14 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {};

ScalarConverter::~ScalarConverter() {};

void ScalarConverter::convert(const std::string &str)
{
	std::string			tmp = str;
	char				x_char;
	int					x_int;
	float				x_float;
	double				x_double;	

	if (!str.empty() && \
			str != "inff" && \
			str != "+inff" && \
			str != "-inff" && \
			str != "inf" && \
			str != "-inf" && \
			str != "+inf" && \
			str.back() == 'f') 
	{
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
		std::cout << "float: ";
		if (tmp == "nan")
			std::cout << std::numeric_limits<float>::quiet_NaN() << "f" << std::endl;
		else if (tmp == "inf" || tmp == "inff" || tmp == "+inf" || tmp == "+inff")
			std::cout << std::numeric_limits<float>::infinity() << "f" << std::endl;
		else if (tmp == "-inf" || tmp == "-inff")
			std::cout << -std::numeric_limits<float>::infinity() << "f" << std::endl;
		else
		{
			std::stringstream	ss2(tmp);
			if (ss2 >> x_float) {
				double intPart;
				double fracPart = std::modf(x_float, &intPart);
				if (fracPart == 0.0)
					std::cout << x_float << ".0f" << std::endl;
				else
					std::cout << x_float << "f" << std::endl;
			}
			else
				std::cout << "impossible" << std::endl;
		}
	}

 // conversion to double
	{
		std::cout << "double: ";
		if (tmp == "nan")
			std::cout << std::numeric_limits<double>::quiet_NaN() << std::endl;
		else if (tmp == "inf" || tmp == "inff" || tmp == "+inf" || tmp == "+inff")
			std::cout << std::numeric_limits<double>::infinity() << std::endl;
		else if (tmp == "-inf" || tmp == "-inff")
			std::cout << -std::numeric_limits<double>::infinity() << std::endl;
		else 
		{
			std::stringstream	ss3(tmp);
			if (ss3 >> x_double) {
				double intPart;
				double fracPart = std::modf(x_double, &intPart);
				if(fracPart == 0.0)
					std::cout << x_double << ".0" << std::endl;
				else
					std::cout << x_double << std::endl;
			}
			else
				std::cout << "impossible" << std::endl;
		}
	}
}