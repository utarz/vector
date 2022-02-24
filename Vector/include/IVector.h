#pragma once
template<typename T>
class IVector {
public:
	virtual void push_back(T t) = 0;
	virtual void push_front(T t) = 0;
	virtual T pop_back() = 0;
	virtual T pop_front() = 0;
	virtual T front() = 0;
	virtual T back() = 0;
	virtual int get_size() = 0;
};