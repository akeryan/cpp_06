/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:37:25 by akeryan           #+#    #+#             */
/*   Updated: 2024/06/11 17:45:28 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "ctime"

Base *generate(void)
{
	int seed = std::time(NULL) % 3;

	switch (seed) {
		case 0:
			return new A();
			break ;
		case 1:
			return new B();
			break ;
		case 2:
			return new C();
			break ;
		default:
			break ;
	}
	return new Base();
}

void identify(Base *p)
{
	if (A *a_ptr = dynamic_cast<A *>(p))
		std::cout << "PTR: actual object type: A" << std::endl;
	else if (B *b_ptr = dynamic_cast<B *>(p))
		std::cout << "PTR: actual object type: B" << std::endl;
	else if (C *c_ptr = dynamic_cast<C *>(p))
		std::cout << "PTR: actual object type: C" << std::endl;
	else
		std::cout << "PTR: object type hasn't been identified" << std::endl;
}

void identify(Base &p)
{
	try {
		A &a_ref = dynamic_cast<A &>(p);
		std::cout << "REF: object type: A" << std::endl;
		(void)a_ref;
	} catch (std::bad_cast) {
		try {
			B &b_ref = dynamic_cast<B &>(p);
			std::cout << "REF: object type: B" << std::endl;
			(void)b_ref;
		} catch (std::bad_cast) {
			try {
				C &c_ref = dynamic_cast<C &>(p);
				std::cout << "REF: object type: C" << std::endl;
				(void)c_ref;
			} catch (std::bad_cast) {
				std::cout << "REF: object type hasn't been identified" << std::endl;
			}
		}
	}
}

int main(void)
{
	Base *c_ptr = new C();
	Base *a_ptr = new A();
	Base &ref = *a_ptr;	

	identify(c_ptr);
	identify(ref);

	return 0;
}