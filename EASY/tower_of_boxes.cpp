#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,d;
        cin >> n >> m >> d;
        if(d >= m){
            int num = (d/m) + 1;
            if(n % num == 0){
                cout << n/num << "\n";
            }
            else{
                cout << n/num + 1 << "\n";
            }
        }
        else{
            cout << n << "\n";
        }
    }
}