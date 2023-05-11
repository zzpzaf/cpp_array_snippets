
//arr2a-Using a smart pointer in a function that returns a variable-length array

#include <iostream>
#include <memory>

 std::unique_ptr<int[]> getintegersarr(int sz);


 std::unique_ptr<int[]> getintegersarr(int sz) { 

    int aa = 100;
    int bb = 200;

    std::unique_ptr<int[]> sp_arr(new int[sz]);

    sp_arr[0] = aa;
    sp_arr[1] = bb;

    return sp_arr;

}



int main() { 
    
    std::unique_ptr<int[]> array_ptr = getintegersarr(2);
    //or...
    //auto array_ptr = getintegersarr(2);

    std::cout << array_ptr[0] << "," <<  array_ptr[1] << "\n";
    //Not needed...
    //delete[]  array_ptr;

    return 0; 
}
