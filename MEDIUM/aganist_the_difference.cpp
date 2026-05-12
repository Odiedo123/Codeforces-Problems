#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int max = 0;
        int n;
        cin >> n;
        unordered_map<int,int> freq;
        vector<int> a;
        for(int i = 0; i < n; i++){
            int input;
            cin >> input;
            freq[input] += 1;
            a.push_back(input);
        }

        for(int i = 0 ; i < n; i++){
            if(freq[a[i]] >= a[i]){
                if(a[i] >= max){
                    max = a[i];
                }
            }
        }
        cout << "Ans: " << max << "\n";

    }
}