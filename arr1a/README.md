# <h1 id="toc_0"><p style="background-color:DodgerBlue; color:white; padding-left:5px"> arr1a</p></h1>
<p style="background-color:cadetblue; color:white; padding-left:5px"> Using a <span style="color:moccasin">std::array</span> structure in a function that returns a <span style="color:moccasin">fixed size</span> array</p>

A very simple example of using a <span style="color:red">std::array</span> for an integer array, returned from a function.

Generally in C++, we cannot return an array from a function. 

In  <span style="color:mediumblue">arr1</span> example we have used a pointer function using a _static array_ .

Another option we have, <u>instead of using a **pointer**</u>-based approach, is to use the [std::array](https://en.cppreference.com/w/cpp/container/array) container structure. And this is what this simple example here, is about.

The _syntax_ for declaring and defining a std::array is quite simple:```  std::array<Type, N>; ```, where N is a constant value for the size of the array. For instance: ```  std::array<int, 10>; ``` creates an integer array with fixed size of 10. Note, that we also have to include the Memory Management Library:```#include <array>```

Again, the **drawback** is that we have to use a _predefined, constant value_ for the **fixed-size** array.
___

###The code

```

//1a-Using a std::array structure in a function that returns a fixed size array

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

```

<span style="color:red">Links related to std::array</span>

std::array - cppreference.com
https://en.cppreference.com/w/cpp/container/array

Fixed-size arrays | C++ Programming Language
https://www.cpp-lang.net/learn/course/basics/arrays/fixed-size-arrays/

c++ - Initializing a std::array with a constant value - Stack Overflow
https://stackoverflow.com/questions/57756557/initializing-a-stdarray-with-a-constant-value