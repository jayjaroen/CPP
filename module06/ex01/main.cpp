/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 22:50:09 by jjaroens          #+#    #+#             */
/*   Updated: 2025/07/18 23:00:51 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
    Data original;
    original.id = 12;
    original.name = "test";

    uintptr_t raw = Serializer::serialize(&original);
    Data* result = Serializer::deserialize(raw);

    std::cout << "Original ptr: " << &original << std::endl;
    std::cout << "Deserialized ptr: " << result << std::endl;

    if (result == &original)
        std::cout << "The pointers match!" << std::endl;
    else
        std::cout << "The pointers didn't match!" << std::endl;
    
    std::cout << "Result Td: " << result->id << ", Name: " << result->name << std::endl;
    return (0);
}