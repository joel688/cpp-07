#ifndef TEMPLATES_HPP
#define TEMPLATES_HPP

#include <iostream>

template <typename T>
void Swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T Min(T &a, T &b)
{
	if(a < b)
		return a;
	else
		return b;
}

template <typename T>
T Max(T &a, T &b)
{
	if(a > b)
		return a;
	else
		return b;
}

#endif

