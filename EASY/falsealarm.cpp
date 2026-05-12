#include <iostream>
#include <vector>

using namespace std;

int func(){
    int n, x, count = 0;
    vector<int> state;
    cin >> n >> x;
    for (int i = 0; i < n; i++){
        int y;
        cin >> y;
        state.push_back(y);
    }
    for(int i = 0; i < n; i++){
        if(state[i] == 0){
            continue;
        }
        else{
            if(i+x >= n){
                cout << "YES" << "\n";
                return 0;
            }
            else{
                for(int z = i+x; z < n; z++){
                    if(state[z] == 1){
                        cout << "NO" << "\n";
                        return 0;
                    }
                    count += 1;
                }
                if (count == n-(i+x)){
                    cout << "YES" << "\n";
                    return 0;
                }
            }
        }
    }
}


int main(){
    int t;
    cin >> t;
    while (t--){
        func();
    }
}