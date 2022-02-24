#include <iostream>
#include <IVector.h>
#include <ArrayVector.h>
int main(){
   
    IVector<int>* vec = new ArrayVector<int>();
    try{
	    int temp = vec->back(); 
    } catch(int e){
        assert(e==20 && "Incorrect Exception Number");
        return 0;	
    }
	return 1;
}