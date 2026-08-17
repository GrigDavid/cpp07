#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <stdexcept>
#include <iostream>

template <typename T>
class Array{
	public:
		Array();
		Array(unsigned int n);
		Array(const Array<T> &other);
		~Array();

		Array<T> &operator=(const Array<T> &other);

		T &operator[](unsigned int index);
		const T &operator[](unsigned int index) const;
		unsigned int size() const;
	private:
		T *array;
		unsigned int arraySize;
};

#include "Array.tpp"

#endif