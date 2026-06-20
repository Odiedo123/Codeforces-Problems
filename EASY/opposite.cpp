#include <iostream>
#include <cstdlib>


int main(){
    int num, num2, total, t;
    std::cin >> t;
    while (t--){

        int a,b,c;
        std::cin >>a >>b >> c;
        total = (abs(a-b)) * 2;
        num = total/2 + c;
        num2 = c - total/2;

        if (a > total || b > total || c > total){
            std::cout << "-1" << "\n";
        }
        else if (num > 0 && num <= total){
            std::cout << num << "\n";
        }
        else if (num2 > 0 && num2 <= total){
            std::cout << num2 << "\n";
        }
        else{
            std::cout << "-1" << "\n";
        }

    }
}