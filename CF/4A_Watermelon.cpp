#include <iostream>
#define No std::cout<<"NO"
#define YES std::cout<<"YES"

int main(){
    int w;
    std::cin>>w;
    if (w<=2){
        No;
        return 0;
    }
    if (w%2!=0){
        No;
        return 0;
    }
    YES;
    return 0;
}