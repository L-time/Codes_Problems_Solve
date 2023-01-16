#include <iostream>

int a[101];

int main(){
    int n,k;
    std::cin>>n>>k;
    for (int i = 1; i <= n; ++i) {
        std::cin>>a[i];
    }
    int ak = a[k];
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        if (a[i]>=ak && a[i]!=0) sum++;
    }
    std::cout<<sum;
}