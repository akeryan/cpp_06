/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 10:30:08 by akeryan           #+#    #+#             */
/*   Updated: 2024/06/11 09:56:12 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
#define SCALAR_CONVERTER_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <cmath>

class ScalarConverter
{
	public:
		static void convert(const std::string &str);

	private:
		ScalarConverter();
		~ScalarConverter();
};

#endif