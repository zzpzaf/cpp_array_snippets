
//arr3-Using a struct wrapper with a fixed-length array

#include <iostream>

struct WrapArrStruct{
    int warr[2];
};




WrapArrStruct getintegersstruct();


WrapArrStruct getintegersstruct(){

    int aa = 100;
    int bb = 200;

    WrapArrStruct arWrap;
    arWrap.warr[0] = aa;
    arWrap.warr[1] = bb;

    return arWrap;
 } 




int main() { 
    
    WrapArrStruct arrwraper = getintegersstruct();
    int x = arrwraper.warr[0];
    int y = arrwraper.warr[1];
    // or...
    // int x = getintegersstruct().warr[0];
    // int y = getintegersstruct().warr[1];

    std::cout << "x,y : " << x << ", " << y << '\n'; 

    return 0; 
}
