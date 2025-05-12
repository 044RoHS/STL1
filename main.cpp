#include <iostream>
#include <algorithm>
#include<map>
#include<vector>




int main()
{
    std::string Word = "Hello World";
    std::map<char, int>count;
    std::cout <<"[IN]: ";

    for(char w : Word){
        count[w]++;
    }

    std::vector<std::pair<char, int>> countVec(count.begin(),count.end());

    std::sort(countVec.begin(),countVec.end(),
        [](const std::pair<char, int>& a, const std::pair<char,int>& b){
            return a.second > b.second;
        });

    std::cout << "[OUT]:\n";
    for (auto& pair: countVec){
        std::cout << pair.first << ": "<< pair.second << std::endl;

    }
    return 0;
}
