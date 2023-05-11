# C++ Arrays, pointers, and the alternatives: struct wrappers and vectors – 8 on-the-fly snippets

## Dive not that deep, but just enough to get the grasp!

Since there are a lot of newcomers who are looking for handy examples to obtain a good grasp for starting working with C++, here are 8 on-the-fly simple snippets with their short explanations. They are all around the fact that generally, in C++ we cannot return back from a function an array. Thus, we have to use other approaches that allow us to return a set of data back to the caller. Using pointers is a commonly used approach, however here, we also use, stt:array containers, structs, and vectors.  

## The snippets 

1. arr1 - Using a pointer function that returns a static array with fixed length
2. arr1a - Using a std::array structure in a function that returns a fixed size array
3. arr2 - Using a pointer function that returns a dynamic array
4. arr2a - Using a smart pointer in a function that returns a variable-length array
5. arr3 - Using a struct wrapper with a fixed-length array
6. arr3a - Using a struct wrapper with a pointer to an array and a custom constructor for setting up the size of the array
7. arr4 - Using a vector and a function that returns a vector of integers
8. arr4a - Using a vector and a function that returns a vector of strings - (actually the names of the 12 months - via the nl_langinfo constants: MON_1, MON_2, etc.)
