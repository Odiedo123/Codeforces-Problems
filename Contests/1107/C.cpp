#include <iostream>
#include <string>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string g;
        cin >> g;
        string s = "";
        s +=(g[0]);
        char prev = g[0];
        for(int i = 1; i < n ; i++){
            if(g[i] == prev){
                continue;
            }
            else{
                s += g[i];
                prev = g[i];
            }
        }
        if(size(s) == 2){
            cout << 2 << "\n";
        }
        else{
            cout << 1 << "\n";
        }
        
    }
}
