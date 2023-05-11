# <h1 id="toc_0"><p style="background-color:DodgerBlue; color:white; padding-left:5px"> arr2a</p></h1>
<p style="background-color:cadetblue; color:white; padding-left:5px"> Using a <span style="color:moccasin">smart pointer </span> in a function that returns a <span style="color:moccasin">variable-length</span> array</p>

A very simple example of using a <span style="color:red">smart pointer</span> for an integer array, returned from a function.

Generally in C++, we cannot return an array from a function. 

In our examples <span style="color:mediumblue">arr1</span> and <span style="color:mediumblue">arr2</span> we have used **raw/regular** C/C++ _pointers_ for an (integer) array. The array has been created locally in a function and returned back to the caller. 

In  <span style="color:mediumblue">arr1</span> we have used a _static array_, and thus we haven't to think about deleting it, since static objects leave within the scope they have been created (in our case inside the function). The drawback in this approach is that we can use only **fixed-size arrays**, because they are static arrays.

In  <span style="color:mediumblue">arr2</span> we have used a _dynamic array_ which allows us to define its size. Actually we have passed the desired size as parameter to the function that creates it. The drawback in this case is that we have to take care and **delete the memory allocated by the dynamic array** (delete the array) in order to avoid any memory leaks.    

In this example here, we are using a <span style="color:red">smart pointer</span>.

### A few words about <span style="color:red">smart pointers</span>

Smart pointers has been incorporated in C++ standard library since C++ version 11 (Modern C++). They are class wrappers, and they can be considered as  and/or "proxies" to the raw/regular pointers, that also have the ability to manage the lifetime of the object they are pointed to, e.g. an array. This means that we no longer have to worry about destroying the object (the array) of a smart pointer. The smart pointer itself takes care of this. When the object of the smart pointer is destroyed, then it frees the memory as well. 

Basically, there are 3 types of smart pointers:
- [unique_ptr](https://en.cppreference.com/w/cpp/memory/unique_ptr)
- [shared_ptr](https://en.cppreference.com/w/cpp/memory/shared_ptr)
- [weak_ptr](https://en.cppreference.com/w/cpp/memory/weak_ptr)

(The auto_ptr type has been deprecated).

In this example here, we use the **unique_ptr** type.

The _syntax_ for declaring defining a smart pointer array is pretty similar to the one of a raw/regular pointer. We use again the _**new**_ keyword for allocating the necessary dynamic [heap](https://en.wikipedia.org/wiki/C_dynamic_memory_allocation) memory:
```  std::unique_ptr<T> obj(new T); ```
For instance:
```  std::unique_ptr<int[]> sp_arr(new int[sz]); ```
We also have to include the Memory Management Library:
```#include <memory>```

___

###The code

```

//2a-Using a smart pointer in a function that returns a variable-length array

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
```

<span style="color:red">Links related to smart pointers</span>

c++ - What is a smart pointer and when should I use one? - Stack Overflow
https://stackoverflow.com/questions/106508/what-is-a-smart-pointer-and-when-should-i-use-one

Smart Pointers - What, Why, Which?
https://ootips.org/yonat/4dev/smart-pointers.html

std::unique_ptr - cppreference.com
https://en.cppreference.com/w/cpp/memory/unique_ptr

std::shared_ptr - cppreference.com
https://en.cppreference.com/w/cpp/memory/shared_ptr

std::weak_ptr - cppreference.com
https://en.cppreference.com/w/cpp/memory/weak_ptr

Smart pointers (Modern C++) | Microsoft Learn
https://learn.microsoft.com/en-us/cpp/cpp/smart-pointers-modern-cpp?view=msvc-170

Smart Pointers in C++ - GeeksforGeeks
https://www.geeksforgeeks.org/smart-pointers-cpp/

c++ - Is there any use for unique_ptr with array? - Stack Overflow
https://stackoverflow.com/questions/16711697/is-there-any-use-for-unique-ptr-with-array

c++ - How to make an array that holds unique_ptrs? - Stack Overflow
https://stackoverflow.com/questions/45380466/how-to-make-an-array-that-holds-unique-ptrs

C++ unique_ptr and arrays - Stack Overflow
https://stackoverflow.com/questions/36953688/c-unique-ptr-and-arrays

c++ - Custom initialize array with std::make_unique - Stack Overflow
https://stackoverflow.com/questions/49723917/custom-initialize-array-with-stdmake-unique

How to: Create and use unique_ptr instances | Microsoft Learn
https://learn.microsoft.com/en-us/cpp/cpp/how-to-create-and-use-unique-ptr-instances?view=msvc-170

C++ Smart Pointers and Arrays - C++ Stories
https://www.cppstories.com/2021/smartptr-array/

An Illustrated Guide to the Stack, the Heap, and Pointers | by Young Coder | Young Coder | Medium
https://medium.com/young-coder/an-illustrated-guide-to-memory-the-stack-the-heap-and-pointers-40a604f7bc53


