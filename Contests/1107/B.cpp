#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        int d = to_string(x).size();
        long long y = 1;
        for (int i = 0; i < d; i++) y *= 10;
        y += 1;
        cout << y << "\n";
    }
}