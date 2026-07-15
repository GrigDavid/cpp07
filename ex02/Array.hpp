#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template <typename T>
class Array{
	public:
		Array();
		Array(unsigned int n);
		Array(const Array<T> &other);
		~Array();
		Array<T> &operator=(const Array<T> &other);
		T &operator[](unsigned int index);
		unsigned int size() const;
	private:
		T *array;
		unsigned int arraySize;
};

#include "Array.tpp"

#endif