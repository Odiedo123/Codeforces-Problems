#include <vector>
#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> nums;
        for(int i = 0; i < n; i++){
            int input;
            cin >> input;
            nums.push_back(input);
        }
        for(int i = 0; i < n; i++){
            int up = 0;
            int down = 0;
            for(int y = i+1; y < n ; y++){
                if (nums[y] > nums[i]){
                    up += 1;
                }
                if(nums[y] < nums[i]){
                    down += 1;
                }
            }
            cout << max(up, down) << " ";
        }
        cout <<"\n";
    }
}