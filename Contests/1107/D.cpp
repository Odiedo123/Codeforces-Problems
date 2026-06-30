#include <iostream>
#include <vector>
using namespace std;

using ll = long long;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> a;
        vector<ll> b;
        vector<ll> par_a(n);
        vector<ll> par_b(n);
        for(ll i = 0 ; i <  n ; i++){
            ll input;
            cin >> input;
            a.push_back(input);
            if(i == 0){
                par_a[i] = input;
            }
            else{
                par_a[i] = par_a[i-1] + input;
            }
        }

        for(ll i = 0 ; i <  n ; i++){
            ll input;
            cin >> input;
            b.push_back(input);
            if(i == 0){
                par_b[i] = input;
            }
            else{
                par_b[i] = par_b[i-1] + input;
            }
        }
        bool out = false;
        for(ll i = 0; i< n;i++){
            if(par_a[i] > par_b[i]){
                cout << "NO" << "\n";
                out = true;
                break;
            }
        }
        if(out == false){
            cout << "YES" << "\n";
        }

    }
}