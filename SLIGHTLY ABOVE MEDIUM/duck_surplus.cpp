#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

using ll = long long;

int main(){
    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        vector<ll> a;
        for(ll i = 0; i < n; i++){
            ll input;
            cin >> input;
            a.push_back(input);
        }
        for(ll i = 0; i < n-1; i++){
            if(a[i] > a[i + 1]){
                ll ller = a[i];
                a[i] = a[i + 1];
                a[i + 1] = ller + a[ i+ 1];
            }
        }
        cout << *max_element(a.begin(), a.end()) << "\n";
    }
}