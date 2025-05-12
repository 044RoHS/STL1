#include <iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main()
{
    int count;
    cout << "Введите количесвто элементов";
    cin >> count ;
    std::vector<int>vec(count);
    for (int i = 0 ; i < count; ++i){
        cin >> vec[i];
    }
    std::sort(vec.begin(),vec.end());
    auto it = std::unique(vec.begin(),vec.end());
    vec.erase(it ,vec.end());
    for ( auto i = vec.rbegin(); i != vec.rend(); ++i){
        cout << *i << endl;
    }
    return 0;
}
