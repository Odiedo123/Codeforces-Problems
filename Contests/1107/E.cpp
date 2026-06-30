#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<vector<int>> u(n,{0});
        vector<vector<int>> v(n,{0});
        for(int i = 0; i < n; i++){
            int a,b;
            cin >> a >> b;
            u[a].push_back(b);
        }
    }
}