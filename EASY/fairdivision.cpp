#include <iostream>

int main(){
    int t;
    std::cin >> t;
    while (t--){
        int n, x;
        int count1 = 0, count2 = 0;
        std::cin >> n;
        for (int i = 1; i <= n; i++){
            std::cin >> x;
            if (x == 2){
                count2 += 1;
            }
            else{
                count1 += 1;
            }
        }
        if (count1 %2 == 0 ){
            if (count1 == 0 && count2 %2 == 1){
                std::cout << "NO\n";
            }
            else{
                std::cout << "YES\n";
            }
        }
        else{
            std::cout << "NO\n";
        }
    }
}