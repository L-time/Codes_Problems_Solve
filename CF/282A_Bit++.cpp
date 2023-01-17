#include <iostream>

int main(){
    int n,a=0;
    std::cin>>n;
    for (int i = 0; i < n; ++i) {
        std::string s;
        std::cin>>s;
        if (s[1]=='+') a++;
        else if (s[1]=='-') a--;
    }
    std::cout<<a;
}