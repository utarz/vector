#include <iostream>
#include <IVector.h>
#include <ArrayVector.h>
int main(){
   
    IVector<int>* vec = new ArrayVector<int>();
    assert(0==vec->get_size() && "Initial size is not zero");	
    return 0;
}