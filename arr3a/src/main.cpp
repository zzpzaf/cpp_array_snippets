
//arr3a - Using a struct wrapper with a pointer to an array and a custom constructor for setting up the size of the array

#include <iostream>

struct WrapArrStruct{
    
    
    //int warr[]; //<- C Flexible araays are not supported in C++ 
    int *warr;

    WrapArrStruct(int s=2) : warr{new int[s]} {}

    ~WrapArrStruct() {
        delete warr;
    }

};




WrapArrStruct getintegersstruct();


WrapArrStruct getintegersstruct(){

    unsigned int aa = 100;
    unsigned int bb = 200;

    // Below, we use the default constructor that has 
    // a predefined value 2 for the size of the array
    WrapArrStruct arWrap;
    arWrap.warr[0] = aa;
    arWrap.warr[1] = bb;

    // Alternatively, we can use the custom constructor that has 
    // a predefined value 2 for the size of the array
    // WrapArrStruct arWrap(3);
    // arWrap.warr[0] = aa;
    // arWrap.warr[1] = bb;
    // arWrap.warr[2] = 300;



    return arWrap;
 } 


//calling...

int main() { 
    
    WrapArrStruct arrwraper = getintegersstruct();
    int x = arrwraper.warr[0];
    int y = arrwraper.warr[1];
    // or...
    // int x = getintegersstruct().warr[0];
    // int y = getintegersstruct().warr[1];
    std::cout << "x,y : " << x << ", " << y << '\n'; 
    //std::cout << "x,y,z : " << x << ", " << y << ", "<< arrwraper.warr[2] << '\n'; 

    return 0; 
}
