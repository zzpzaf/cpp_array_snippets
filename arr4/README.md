# <p style="background-color:DodgerBlue; color:white; padding-left:5px"> arr4</p>

<p style="background-color:cadetblue; color:white; padding-left:5px"> Using a  <span style="color:yellow"> vector </span> and a function that returns a <span style="color:yellow"> vector </span> of integers</p>

A very simple example that uses and returns a vector of <u>integers</u> from a function.

Generally in C++, we cannot return an array from a function. 


## A few words about  <span style="color:red">vectors</span>

Using vectors might be is the most preferable approach, when you want to return a set of values. This is because vectors they act similarly to array structures (LIFO sequence containers), and they are very handy to be resized (adding, deleting items). Moreover, the destruction of a vector is automatic once the vector goes out scope, and the allocated memory is free back on the heap. Vectors are base on the **std::vector** class template that contains the vector container and its member functions. It is defined inside the <vector> header file.



___

###The code

```
//4-Using a vector and a function that returns a vector

#include <iostream>
#include <vector>

std::vector<int> getintegersvector();


std::vector<int> getintegersvector() { 

    int aa = 100;
    int bb = 200;


    //std::vector<int> v_arr{aa,bb};
    //std::vector<int> v_arr(2,0);
    std::vector<int> v_arr;

    v_arr.push_back(aa);
    v_arr.push_back(bb);

    return v_arr;

}

//calling...

int main() { 

       
    //std::cout <<  getintegersvector().at(0) << "," << getintegersvector().at(1) << "\n";

    std::vector<int> v = getintegersvector();
    v.push_back(300);
    std::cout <<  v.at(0) << "," << v.at(1) << "," << v.at(2) << "\n";


    return 0; 
}


```


#### <span style="color:red">Links related to vectors</span>

Sequence container (C++) - Wikipedia
https://en.wikipedia.org/wiki/Sequence_container_(C%2B%2B)

stl - Why is a C++ Vector called a Vector? - Stack Overflow
https://stackoverflow.com/questions/581426/why-is-a-c-vector-called-a-vector

When to use vectors and when to use arrays in C++? - Stack Overflow
https://stackoverflow.com/questions/10865861/when-to-use-vectors-and-when-to-use-arrays-in-c

https://cplusplus.com/reference/vector/vector/
https://cplusplus.com/reference/vector/vector/

Vector in C++ STL - GeeksforGeeks
https://www.geeksforgeeks.org/vector-in-cpp-stl/

Initialize a vector in C++ (7 different ways) - GeeksforGeeks
https://www.geeksforgeeks.org/initialize-a-vector-in-cpp-different-ways/

C++ Vectors (With Examples)
https://www.programiz.com/cpp-programming/vectors

C++ Vector: How It Works And Why You Need It
https://matgomes.com/cpp-vectors-guide/

C++ Vectors
https://www.tutorialkart.com/cpp/cpp-vector/#gsc.tab=0

Vector In C++ STL Explained, With Examples - History-Computer
https://history-computer.com/vector-in-c-stl-explained/

Arrays and Vectors – Basic Modern C++
https://hsf-training.github.io/hsf-training-cpp-webpage/03-arrays-and-vectors/index.html

std::vector - cppreference.com
https://en.cppreference.com/w/cpp/container/vector

Vector in C++ | C++ Vector - Scaler Topics
https://www.scaler.com/topics/cpp/vector-in-cpp/

c++ - What is the easiest way to initialize a std::vector with hardcoded elements? - Stack Overflow
https://stackoverflow.com/questions/2236197/what-is-the-easiest-way-to-initialize-a-stdvector-with-hardcoded-elements

c++ - Initializing and setting a vector<int> - Stack Overflow
https://stackoverflow.com/questions/15238654/initializing-and-setting-a-vectorint

Efficient way to return a std::vector in c++ - Stack Overflow
https://stackoverflow.com/questions/15704565/efficient-way-to-return-a-stdvector-in-c

c++ - How to return a vector from a function - Stack Overflow
https://stackoverflow.com/questions/18808763/how-to-return-a-vector-from-a-function

