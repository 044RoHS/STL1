#include "header.h"

int main()
{
    std::set <std::string>set_of_strings = {"one" , "two" , "three" , "four"};
    print_container(set_of_strings);
    std::vector<std::string>set_of_strings1 = {"one" , "two" , "three" , "four"};
    print_container(set_of_strings1);
    std::list<std::string>set_of_strings2 = {"one" , "two" , "three" , "four"};
    print_container(set_of_strings2);
    return 0;
}
