
//arr4a-Using a vector and a function that returns a vector of strings - (actually the names of the 12 months - via the nl_langinfo constants: MON_1, MON_2, etc.)

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
}
