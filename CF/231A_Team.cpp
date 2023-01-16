#include <iostream>
int main(){
    int n,sum=0;
    std::cin>>n;
    for (int i = 0; i < n; ++i) {
        int a=0;
        for (int j = 0; j < 3; ++j) {
            int t;
            std::cin>>t;
            a+=t;
        }
        if (a>=2) sum++;
    }
    std::cout<<sum;
}