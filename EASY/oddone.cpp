#include <iostream>

int main(){
    int t;
    std::cin >> t;
    while (t--){
        int a,b,c;
        std::cin >> a >> b >> c;
        if (a - b == 0){
            std::cout << c << "\n";
        }
        else if (a - c == 0){
            std::cout << b << "\n";
        }
        else if (b - c == 0){
            std::cout << a << "\n";
        }
    }
}