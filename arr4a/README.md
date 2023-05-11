# <p style="background-color:DodgerBlue; color:white; padding-left:5px"> arr4a</p>

<p style="background-color:cadetblue; color:white; padding-left:5px"> Using a  <span style="color:yellow"> vector </span> and a function that returns a <span style="color:yellow"> vector </span> of <u>strings</u> - (actually the names of the 12 <b>months</b>)</p>

Another simple example that uses and returns a vector -this time a vector of <u>strings</u>.

In this example, instead of using string literals as values for the elements of our vector, we are going to use the names of months. The standard names of the 12 months of the year are obtained via the [nl_langinfo](https://man7.org/linux/man-pages/man3/nl_langinfo.3.html) constants (MON_1, MON_2, etc).



___

### The code

```
//4a-Using a vector and a function that returns a vector of strings (actually the names of months)

#include <iostream>
#include <vector>
#include <langinfo.h>


std::vector<std::string> getstringsvector();


std::vector<std::string> getstringsvector() { 


    int sz =12;
    std::vector<std::string> v_arr;

    for (int i=0; i<sz; i++ )
        v_arr.push_back(nl_langinfo(MON_1+i));
    

    return v_arr;
        
}

//calling...

int main() { 

       
    //std::cout <<  getintegersvector().at(0) << "," << getintegersvector().at(1) << "\n";

    std::vector<std::string> v = getstringsvector();
    for (std::string m_name : v)
        std::cout << m_name << "\n";


    // int i;
    // for (i = 0; i < 12; i++) {
    //     printf("%d\t%s\n",
    //             i+1, nl_langinfo(MON_1+i));
    // }


    return 0; 


```


#### <span style="color:red">Links</span>

c++ - Initialize a vector array of strings - Stack Overflow
https://stackoverflow.com/questions/4268886/initialize-a-vector-array-of-strings

Array of Strings in C++ - 5 Different Ways to Create - GeeksforGeeks
https://www.geeksforgeeks.org/array-of-strings-in-cpp-5-different-ways-to-create/

C++ String to Vector Using Delimiter - GeeksforGeeks
https://www.geeksforgeeks.org/cpp-string-to-vector-using-delimiter/

c++ - How to find a certain value in a vector of strings - Stack Overflow
https://stackoverflow.com/questions/58736449/how-to-find-a-certain-value-in-a-vector-of-strings

nl_langinfo(3) - Linux manual page
https://man7.org/linux/man-pages/man3/nl_langinfo.3.html

langinfo.h - IBM Documentation
https://www.ibm.com/docs/en/zos/2.1.0?topic=files-langinfoh

