#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include<vector>
#include<list>
#include<set>
#include <string>
template< typename T>
T print_container(const T& test){
    for (const auto& element : test){
        std::cout << element << " ";
    }
    std::cout << std::endl;

}

#endif // HEADER_H
