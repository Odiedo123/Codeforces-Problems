#include <iostream>
#include <vector>

int main(){
    int n;
    int x;
    int maximum = 0;
    int total = 0;
    std::cin >> n;
    std::vector<int> vec;
    for (int i = 0; i < n; i++){
        std::cin >> x;
        vec.push_back(x);
        
        if (vec[i] > maximum){
            maximum = vec[i];
        }
    }
    for (int i = 0; i < n; i++){
        total += (maximum - vec[i]);
    }
    std::cout << total;

}