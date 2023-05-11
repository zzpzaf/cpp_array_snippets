
//2-Using a pointer function that returns a variable-length array

#include <iostream>

int* getintegersarr(int sz);


int* getintegersarr(int sz) { 

    int aa = 100;
    int bb = 200;

   
    int* arr = new int[sz]; ;
    arr[0] = aa;
    arr[1] = bb;

    return arr;

}



int main() { 
    
    int * array_ptr = getintegersarr(2);
 
    std::cout << array_ptr[0] << "," <<  array_ptr[1] << "\n";
    delete[]  array_ptr;

    // or...
    // std::cout << getintegersarr(2)[0] << getintegersarr(2)[1] << "\n";
    // delete[] getintegersarr(2);


    return 0; 
}
