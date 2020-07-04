#include <iostream>
#include <vector>
int main() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> v[i];
    }
    int sum=0;
    int power=1;
    power=power<<n-1;
    std::cout<<power<<std::endl;
    for (int i = 0; i < n; ++i) {
        sum+=v[i];
    }
    sum*=power;
    std::cout << sum;
}
