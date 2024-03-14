/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 08:33:35 by joakoeni          #+#    #+#             */
/*   Updated: 2024/03/14 08:33:36 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, size_t N, typename Function>
void iter(T (&array)[N], size_t length, Function func)
{
	for(size_t i = 0; i < length; ++i)
	{
		func(array[i]);
	}
}

template <typename T>
void printElement(const T& element)
{
	std::cout << element << "/";
}

#endif

