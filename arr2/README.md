# <h1 id="toc_0"><p style="background-color:DodgerBlue; color:white; padding-left:5px"> arr2</p></h1>
<p style="background-color:cadetblue; color:white; padding-left:5px"> Using a <span style="color:moccasin">pointer function</span> that returns a <span style="color:moccasin">dynamic</span> array</p>



A very simple example of returning a pointer to an integer array from a function.

Generally in C++, we cannot return an array from a function. 

A commonly used approach is to return a pointer, pointing to the integer array, that the function returns.

Here we use a dynamic array. This means that we dynamically allocate some memory from the [heap](https://en.wikipedia.org/wiki/C_dynamic_memory_allocation), during the array creation. This is achieved by using the _**new**_ keyword as int following syntax:
``` int* arr = new int[sz]; ```
In this example, the length (the size)  for the array, is passed as argument to the function.
After calling the function and getting the returned  array, we have to clear it, e.g. by using the delete[] or free(), in order to avoid memory leaks. 

However, a **drawback** is that we have to _take care for clearing/deleting the memory_ allocated for the variable length array
___

###The code

```

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

//calling

int main() { 
    
    int * array_ptr = getintegersarr(2);
 
    std::cout << array_ptr[0] << "," <<  array_ptr[1] << "\n";
    delete[]  array_ptr;

    // or...
    // std::cout << getintegersarr(2)[0] << getintegersarr(2)[1] << "\n";
    // delete[] getintegersarr(2);


    return 0; 
}


```



