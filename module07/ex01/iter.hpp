/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:42:37 by jjaroens          #+#    #+#             */
/*   Updated: 2025/07/19 15:18:23 by jjaroens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

# include <iostream>
# include <string>

template <typename T> 
void iter(T *arr, size_t length, void (*func) (T const &))
{
	for (size_t i = 0; i < length; i++)
		func(arr[i]);
}

template <typename T>
void print(T const &other)
{
	std::cout << other << " ";
}

#endif