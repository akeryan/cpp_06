/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:51:35 by akeryan           #+#    #+#             */
/*   Updated: 2024/06/11 14:13:21 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

# include <string>

struct Data 
{
	std::string _name;
	int			_age;
	int			_height;

	Data(const std::string name, const int age, const int height);
};

#endif