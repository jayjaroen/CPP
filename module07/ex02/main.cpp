/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 16:35:55 by jjaroens          #+#    #+#             */
/*   Updated: 2025/08/24 14:33:00 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include <cstdlib>
#include "Array.hpp"

#define MAX_VAL 3

int main(void)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand() % 10;
        numbers[i] = value;
        mirror[i] = value;
        std::cout << "number " << i << " " << numbers[i] << std::endl;
        std::cout << "mirror " << i << " " << mirror[i] << std::endl;
    }
    //SCOPE
    {
        std::cout << std::endl << "Copy Array " << std::endl;
        Array<int> tmp = numbers;
        Array<int> test(tmp);
        std::cout << "tmp array: " << std::endl;
        for (int i = 0; i < MAX_VAL; i++)
            std::cout << tmp[i] << std::endl;
            
        std::cout << "test array: " << std::endl;
        for (int i = 0; i < MAX_VAL; i++)
            std::cout << test[i] << std::endl;

        std::cout << "number array: " << std::endl;
        for (int i = 0; i < MAX_VAL; i++)
            std::cout << numbers[i] << std::endl;
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try 
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cout << "negative index" << std::endl;
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << numbers[100] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "invalid index number" << std::endl;
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    
    Array<std::string> food(MAX_VAL);
    for (int i = 0; i < MAX_VAL; i++)
    {
        if ( i % 2 == 0)
            food[i] = "pasta";
        else
            food[i] = "som tam";
    }
    for (int i = 0; i < MAX_VAL; i++)
        std::cout << food[i] << std::endl;   
    return 0;
}

/// fatal error: too many errors emitted, stopping now ?
