/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 21:34:41 by jjaroens          #+#    #+#             */
/*   Updated: 2025/07/18 16:30:31 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Invalid argument" << std::endl;
        return (1);
    }
    // std::string input = argv[1];
    // std::cout << "Last char: " << input[input.length() - 1] << std::endl;

    // if (input[input.length() - 1] == 'f')
    //     std::cout << "Float suffix detected" << std::endl;
    // else
    //     std::cout << "No float suffix" << std::endl;
    
   
    // std::cout <<"checking boolean: " << (!std::all_of(input.begin(), input.end(), ::isdigit)) <<std::endl;
    // //isprint is also digit
        
    ScalarConverter::convert(argv[1]);
   
    return (0);
}