# <h1 id="toc_0"><p style="background-color:DodgerBlue; color:white; padding-left:5px"> arr1</p></h1>

<p style="background-color:cadetblue; color:white; padding-left:5px"> Using a <span style="color:moccasin">pointer function</span> that returns a <span style="color:moccasin">static array with fixed length</span></p>


A very simple example of returning a pointer to an integer array from a function.

Generally in C++, we cannot return an array from a function. 
A first commonly used approach is to return a pointer, pointing to the integer array, that the function returns.

Here we use a local **static** variable for the array to be returned.
- There are also other approaches for returning an array - actually a pointer to array, e.g. by using dynamically allocated array: ```int* arr = new int[2];``` 
however after calling the function and getting the returned  array, we have to clear it, e.g. by using the delete or free(), in order to avoid memory leaks. [see example **arr2**]
- Using a local static array is a first approach. This is because the lifetime of a static variable is throughout the scope it resides, and here the scope is within the function. Thus there is no need to delete or free the array and its memory allocated.

However, the **drawback** is that we have to use a __predefined, _constant_ value__ for the __fixed size__ array.
___

###The code

```
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
//calling
int main(int argc, char *argv[]) { 
 
    std::cout <<  getintegersarr()[0] << "," << getintegersarr()[1] << "\n";
    
}

```

Links

c++ - How to create an array when the size is a variable not a constant? - Stack Overflow
https://stackoverflow.com/questions/14459248/how-to-create-an-array-when-the-size-is-a-variable-not-a-constant

C++ : Creating an array with a size entered by the user - Stack Overflow
https://stackoverflow.com/questions/28625465/c-creating-an-array-with-a-size-entered-by-the-user

c++ - int *array = new int[n]; what is this function actually doing? - Stack Overflow
https://stackoverflow.com/questions/5776529/int-array-new-intn-what-is-this-function-actually-doing

https://cplusplus.com/reference/new/operator new%5b%5d/
https://cplusplus.com/reference/new/operator%20new%5b%5d/

Arrays (C++) | Microsoft Learn
https://learn.microsoft.com/en-us/cpp/cpp/arrays-cpp?view=msvc-170

new operator (C++) | Microsoft Learn
https://learn.microsoft.com/en-us/cpp/cpp/new-operator-cpp?view=msvc-170

c - Static arrays with variable length - Stack Overflow
https://stackoverflow.com/questions/26311364/static-arrays-with-variable-length

Variable length arrays and static declaration in c - Stack Overflow
https://stackoverflow.com/questions/41365900/variable-length-arrays-and-static-declaration-in-c

How do I set an array size with a variable? C++ - Stack Overflow
https://stackoverflow.com/questions/46553139/how-do-i-set-an-array-size-with-a-variable-c

c++ - How to create an array when the size is a variable not a constant? - Stack Overflow
https://stackoverflow.com/questions/14459248/how-to-create-an-array-when-the-size-is-a-variable-not-a-constant