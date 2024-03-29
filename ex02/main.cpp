/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 08:34:08 by joakoeni          #+#    #+#             */
/*   Updated: 2024/03/14 08:34:09 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Array.hpp"

int main()
{
    try
	{
        // Test the Array class
        Array<int> intArray(5);
        Array<int> copyArray(intArray);
        for (unsigned int i = 0; i < intArray.size(); ++i)
		{
            intArray[i] = i * 2;
    	}
        Array<int> assignArray = intArray;
        for (unsigned int i = 0; i < intArray.size() + 1 ; ++i)
		{
            std::cout << "intArray[" << i << "]: " << intArray[i] << std::endl;
            std::cout << "copyArray[" << i << "]: " << copyArray[i] << std::endl;
            std::cout << "assignArray[" << i << "]: " << assignArray[i] << std::endl;
			std::cout << "---------------------------------------" << std::endl;
        }
    }
	catch (const std::exception& e)
	{
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}
