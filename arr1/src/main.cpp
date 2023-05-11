
//1-Using a pointer function that returns a locally defined static array with fixed length

#include <iostream>

int* getintegersarr();


int* getintegersarr() { 

    int aa = 100;
    int bb = 200;

    const int sz = 2;

    static int arr[sz];
    arr[0] = aa;
    arr[1] = bb;

    return arr;

}


int main() { 
    
    std::cout <<  getintegersarr()[0] << "," << getintegersarr()[1] << "\n";

    return 0; 
}
