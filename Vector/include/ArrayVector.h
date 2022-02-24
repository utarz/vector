#pragma once
#include "IVector.h"
#include <exception>

template<typename T>
class ArrayVector: public IVector<T>{
private:
	T* container;
	int size;
	int capacity;
	void resize();
public :
	ArrayVector();
	void push_back(T t);
	void push_front(T t);
	T pop_back();
	T pop_front();
	T front();
	T back();
	int get_size();
};
template <typename T>
ArrayVector<T>::ArrayVector() {
	container = new T[2];
	size = 0;
	capacity = 2;
}
template <typename T>
void ArrayVector<T>::resize() {
	if (size == capacity) {
		T* temp = new T[capacity * 2];
		for (int i = 0; i < size; i++) {
			temp[i] = container[i];
		}
		capacity *= 2;
		delete container;
		container = temp;
	}
}
template <typename T>
void ArrayVector<T>::push_back(T t) {
	resize();
	container[size] = t;
	size++;
}
template <typename T>
void ArrayVector<T>::push_front(T t) {
	resize();
	for (int i = size - 1; i >= 0; i--) {
		container[i + 1] = container[i];
	}
	container[0] = t;
	size++;
}
template <typename T>
T ArrayVector<T> ::pop_back() {
	if (size == 0 || size>capacity)
		throw 20;
	T ret = container[size - 1];
	size--;
	return ret;
}
template <typename T>
T ArrayVector<T> ::pop_front() {
	if (size == 0 || size>capacity)
		throw 20;
	T ret = container[0];
	size--;
	for (int i = 1; i < size; i++) {
		container[i - 1] = container[i];
	}
	return ret;
}
template <typename T>
T ArrayVector<T> ::front() {
	if (size == 0 || size>capacity)
		throw 20;
	return container[0];
}
template <typename T>
T ArrayVector<T> ::back() {
	if (size == 0 || size>capacity)
		throw 20;
	return container[size - 1];
}
template <typename T>
int ArrayVector<T>::get_size() {
	return size;
}