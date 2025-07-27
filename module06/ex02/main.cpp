/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 11:21:54 by jjaroens          #+#    #+#             */
/*   Updated: 2025/07/27 14:15:53 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <time.h>
#include <cstdlib>
#include <iostream>
#include <exception>


Base *generate(void)
{
	int random;
	
	random = rand() % 3;
	std::cout << random << std::endl;
	if (random == 0)
		return (new A);
	else if (random == 1)
		return (new B);
	else
		return (new C);
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Type: A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Type: B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Type: C" << std::endl;
	else
		std::cout << "Error!" << std::endl;
}

void identify(Base &p)
{
	Base ptr;

	try
	{
		ptr = dynamic_cast<A&>(p);
		std::cout << "Type: A" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		ptr = dynamic_cast<B&>(p);
		std::cout << "Type: B" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		ptr = dynamic_cast<C&>(p);
		std::cout << "Type: C" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}

int	main(void)
{
	Base	*base;

	std::cout << "***Testing with pointers***" << std::endl;
	srand(time(NULL));
	
	base = generate();
	identify(base);
	delete base;
	std::cout << std::endl;

	base = generate();
	identify(base);
	delete base;
	std::cout << std::endl;

	base = generate();
	identify(base);
	delete base;
	std::cout << std::endl;

	base = generate();
	identify(base);
	delete base;
	std::cout << std::endl;

	base = generate();
	identify(base);
	delete base;
	std::cout << std::endl;

	std::cout << "***Testing with references***" << std::endl;

	base = generate();
	identify(*base);
	delete base;
	std::cout << std::endl;

	base = generate();
	identify(*base);
	delete base;
	std::cout << std::endl;

	base = generate();
	identify(*base);
	delete base;
	std::cout << std::endl;

	base = generate();
	identify(*base);
	delete base;
	std::cout << std::endl;

	base = generate();
	identify(*base);
	delete base;
	std::cout << std::endl;
}

//<typeinfo is forbidden>