#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, product = 1, min = 100000000, count = 0;
        cin >> n;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x < min){
                min = x;
            }
            if(x == 0){
                count += 1;
            }
            else{
                product *= x;
            }
        }
        if (count == 1){
            cout << product << "\n";
        }
        else if(count == 0){
            product = (product/min)*(min + 1);
            cout << product << "\n";
        }
        else if(count > 1){
            cout << "0" << "\n";
        }

    }
}