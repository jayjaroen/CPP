/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 16:35:55 by jjaroens          #+#    #+#             */
/*   Updated: 2025/07/23 21:57:22 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <time.h>
#include <cstdlib>

#define MAX_VAL 3

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
        // std::cout << "number " << i << " " <<  numbers[i] << std::endl;
        // std::cout << "mirror " << i << " " << mirror[i] << std::endl;
    }
    //SCOPE
    {
        std::cout << std::endl << "Copy Array " << std::endl;
        Array<int> tmp = numbers;
        Array<int> test(tmp);
        // for (int i = 0; i < MAX_VAL; i++)
        // {
        //     std::cout << "tmp " << i << " " << tmp[i] << std::endl;
        //     std::cout << "test " << i << " " << test[i] << std::endl;
        // }
    }
    std::cout << "Inside another loop" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        // std::cout << "number " << i << " " <<  numbers[i] << std::endl;
        // std::cout << "mirror " << i << " " << mirror[i] << std::endl;
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
        numbers[MAX_VAL] = 0;
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
    return 0;
}
/// fatal error: too many errors emitted, stopping now ?
