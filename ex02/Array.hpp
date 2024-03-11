#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template <typename T>
class Array
{
	private:
		T* elements;
    	unsigned int arraySize;
	public:
		Array() : elements(NULL), arraySize(0) {}
	    Array(unsigned int n) : arraySize(n)
		{
        	elements = new T[arraySize];
        	for (unsigned int i = 0; i < arraySize; ++i)
			{
            	elements[i] = T();
        	}
    	}
		Array(const Array& src) : arraySize(src.arraySize)
		{
        	elements = new T[arraySize];
        	for (unsigned int i = 0; i < arraySize; ++i)
			{
            	elements[i] = src.elements[i];
        	}
    	}
    	Array& operator=(const Array& src)
		{
        	if (this != &src) 
			{
            	delete[] elements;
            	arraySize = src.arraySize;
            	elements = new T[arraySize];
            	for (unsigned int i = 0; i < arraySize; ++i)
				{
                	elements[i] = src.elements[i];
            	}
        	}
        	return *this;
    	}
    ~Array() 
	{
        delete[] elements;
    }
    T& operator[](unsigned int index)
	{
        if (index >= arraySize)
		{
            throw std::out_of_range("Index out of bounds");
        }
        return elements[index];
    }
    unsigned int size() const
	{
        return arraySize;
    }
};

#endif
