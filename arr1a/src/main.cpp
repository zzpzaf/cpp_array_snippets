
//arr1a-Using a std::array structure in a function that returns a fixed size array

#include <iostream>
#include <array>

 std::array<int, 2> getintegersarr();


 std::array<int, 2> getintegersarr() { 

    int aa = 100;
    int bb = 200;

    //std::array<int, 2> myarr{aa,bb};
    std::array<int, 2> myarr{};

    myarr[0] = aa;
    myarr[1] = bb;

    return myarr;

}

//calling...

int main() { 
    
    std::array<int, 2> arr = getintegersarr();

    std::cout << arr[0] << "," <<  arr[1] << "\n";


    return 0; 
}
