/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:09:12 by akeryan           #+#    #+#             */
/*   Updated: 2024/06/11 14:20:12 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int main(void)
{
	Data *ptr = new Data("Boris", 33, 182);
	std::cout << "Name: " << ptr->_name << std::endl;

	uintptr_t a = Serializer::serialize(ptr); 
	Data *ptr_new = Serializer::deserialize(a);	

	std::cout << "Name: " << ptr_new->_name << std::endl;
	
	return 0;
}