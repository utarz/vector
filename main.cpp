#include <iostream>
#include <adder.h>
#include <IVector.h>
#include <ArrayVector.h>
int main(){
    std::cout<<"Hell World!\n";
    std::cout<<add(2.3f, 4.5f)<<"\n";

    IVector<int>* vec = new ArrayVector<int>();
	for (size_t i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
			vec->push_back(i);
		else vec->push_front(i);
	}
	std::cout << vec->back() << " | " << vec->back() << " | " << vec->front() << " | " << vec->front() << " \n ";
	while (vec->get_size()>0)
	{
		std::cout << vec->pop_back() << " | ";

	}
    return 0;
}