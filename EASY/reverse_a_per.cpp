#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        vector<int> nums;
        vector<int> nums_original;
        bool breakout = false;
        cin >> n;
        for(int i = 0; i <n; i++){
            int x;
            cin >> x;
            nums.push_back(x);
            nums_original.push_back(x);
        }
        for (int index = 0; index < n; index++){
            for (int index2 = index + 1; index2 < n; index2++){
                if (nums[index] < nums[index2] && breakout == false){
                    for (int switch1 = 0; switch1 < n/2; switch1++){
                        nums[index + switch1] = nums_original[index2 - switch1];
                        nums[index2 - switch1] = nums_original[index + switch1];
                    }
                    breakout = true;
                }
                else{
                    continue;
                }
            }
        }
        for (int element : nums){
            cout << element << " ";
        }
        cout << "\n";
    }
}