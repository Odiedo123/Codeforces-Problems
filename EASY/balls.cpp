#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    vector<int> balls;
    vector<vector<int>> prev(n, {-1,-1});
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        if(prev[input][0] == -1){
            prev[input][0] = input;
        }
        else{
            prev[input][1] = input;
        }
        balls.push_back(input);
    }
}