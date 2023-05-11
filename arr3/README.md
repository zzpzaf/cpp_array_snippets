# <h1 id="toc_0"><p style="background-color:DodgerBlue; color:white; padding-left:5px"> arr3</p></h1>
<p style="background-color:cadetblue; color:white; padding-left:5px"> Using a <span style="color:orange";><b>struct</b></span> wrapper with a fixed-length array</p>

Generally in C++, we cannot return an array from a function. 

An approach can be to use a **_struct_** array wrapper. So, instead of returning an array, we can use a function that returns the wrapper instance.


## Short intro to C++ structures - <span style="color:red;"> struct </span>

In this version we use a  <span style="color:red;"> **struct**</span>.
**structs** in C++ are classes that by default use public access modifier for all of their members (variables, functions, etc). A **struct** is a user-defined data type that combines logically related data items of different data types like float, char, int, etc., together. Moreover, it cannot have null values.
A commonly used approach is to use structs as **POD**s (C **Plain-Old-Data** structures).  A struct with no modifiers or methods is a C POD struct. This gives C++ a backwards compatible interface with C libraries. <i>"A POD-struct is an aggregate class that has no non-static data members of type non-POD-struct, non-POD-union (or array of such types) or reference, and has no user-defined copy assignment operator and no user-defined destructor."</i>
A struct instance is considered as a “struct variable”


However, the **drawback** is that we have to use a _fixed size_ array. So, a better approach is to use a pointer in struct to set the desired size of the array. [See the next example snippet: **<span style="color:magenta;">arr3a</span>**] 
___

## The code

```


//3-Using a struct wrapper

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


//calling...

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



```



