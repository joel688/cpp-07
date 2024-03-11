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

