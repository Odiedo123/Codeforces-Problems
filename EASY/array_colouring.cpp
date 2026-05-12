#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, total = 0;
        cin >> n;
        string result = "YES";
        vector<int> nums;
        vector<int> sort_nums;
        vector<int> blue;
        int phase = 0;

        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            nums.push_back(x);
            sort_nums.push_back(x);

            if (phase%2 == 0){
                blue.push_back(x);
                phase += 1;
            }
        }

        sort(sort_nums.begin(), sort_nums.end());

        for (int i = 0; i < blue.size(); i++){
            if (find(blue.begin(), blue.end(), sort_nums[i]) != blue.end()) {
                total += 1;
            }
            else{
                total -= 1;
            }

            if (total > 1 || total < -1){
                result = "NO";
                break;
            }
        }

        cout << result << "\n";

    }
}