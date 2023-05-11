
//arr4 - Using a vector and a function that returns a vector of integers

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
