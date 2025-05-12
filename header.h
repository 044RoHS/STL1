#ifndef HEADER_H
#define HEADER_H
#include<iostream>
#include<vector>
#include <algorithm>

void Delete1(std::vector<int>& Vec){

    std::sort(Vec.begin(), Vec.end());
    auto del = std::unique(Vec.begin(),Vec.end());
    Vec.erase(del,Vec.end());

    for (const auto &NewVector:Vec){
        std::cout << NewVector << std::endl;
    }
}


#endif // HEADER_H
