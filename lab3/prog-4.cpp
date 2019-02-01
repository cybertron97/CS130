#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

void print_cases(const std::string& name)
{
     char  up[name.size()];
     char lo[name.size()];
    //unsigned int i = 0;
    for(size_t i = 0 ; i < name.size()+1; i++)
    {
        up[i] = std::toupper(name[i]);
        lo[i] = std::tolower(name[i]);
    }

    //++i;
   // up[i]='\0';
    //lo[i]='\0';
    std::cout << lo << " " << up << std::endl;
}

int main()
{
    print_cases("Elizabeth");
    print_cases("John");
    print_cases("Frank");
    print_cases("Fred");

    return 0;
}

