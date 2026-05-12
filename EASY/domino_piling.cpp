#include <iostream>

using namespace std;

int main(){
    int m,n;
    cin >> m>> n;
    if(m == 1 && n==1){
        cout << 0 << "\n";
        return 0;
    }
    cout << (m*n)/2 << "\n";
}