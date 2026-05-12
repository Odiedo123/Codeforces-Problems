#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        int max = 0;
        cin >> n;
        vector<int> a;
        vector<int> prefix_b(n);
        for (int i = 0 ; i < n; i++){
            int x;
            cin >> x;
            if(x >= max){
                max = x;
            }
            a.push_back(x);
        }

        int x;
        cin >> x;
        prefix_b.push_back(x);
        for (int i = 1 ; i < n; i++){
            int x;
            cin >> x;
            prefix_b[i] = prefix_b[i-1] + x;
        }
        for(int i = 0 ; i < max; i++){

        }
    }
}