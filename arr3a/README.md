# <h1 id="toc_0"><p style="background-color:DodgerBlue; color:white; padding-left:5px"> arr3a</p></h1>

<p style="background-color:cadetblue; color:white; padding-left:5px"> Using a struct wrapper with a pointer to an array and a custom constructor for setting up the size of the array</p>

Generally in C++, we cannot return an array from a function. 

 In our previous example snippet **<span style="color:blue;">arr3</span>** we used a struct with a predefine/fixed size of an array as a member variable of the struct.
 
 Here we continue using a **<span style="color:red;">struct as a wrapper of an array</span>** that can be returned from a function. However this time we actually use a pointer to an array, the size of which can be setup via the struct's instantiation. Struct, like classes can also have constructors and de-constructors. And this is true in our example here. Our struct declaration includes a **_custom constructor,_** which is being used to set up the size of the member array, e.g.: ```WrapArrStruct arWrap(3); ```. Moreover, the struct's declaration also uses a **_de-constructor,_** in order to free the memory allocated by the array uppon struct instance goes out of scope, and thus, it prevents any memory leaks. Finally, please note, that we also use a predefined value for the size of the array that can be used when instantiate the struct using the defult constructor. e.g.: ``` WrapArrStruct arWrap;```


___

###The code

```

//3a-Using a struct wrapper

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

```

Links

Variable Length Arrays in C/C++ - GeeksforGeeks
https://www.geeksforgeeks.org/variable-length-arrays-in-c-and-c/

c - How can I create a dynamically sized array of structs? - Stack Overflow
https://stackoverflow.com/questions/260915/how-can-i-create-a-dynamically-sized-array-of-structs

How to create a dynamic array inside a structure? - CodeProject
https://www.codeproject.com/Questions/5276837/How-to-create-a-dynamic-array-inside-a-structure

C++ Pointer to an Array
https://www.tutorialspoint.com/cplusplus/cpp_pointer_to_an_array.htm

