#include <iostream>

using namespace std;

using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        ll p,q;
        cin >> p >> q;
        if(q-p > 0 && 2*(q-p) <= p){
            cout << "Bob" << "\n";
        }
        else{
            cout << "Alice" << "\n";
        }
    }
}