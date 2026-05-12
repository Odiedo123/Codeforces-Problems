#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        vector<vector<char>> nums(8, vector<char>(8));
        for (int i = 0; i < 8; i++) {
            string line;
            cin >> line;
            for (int j = 0; j < 8; j++) {
                nums[i][j] = line[j];
            }
        }

        for (int index = 1; index < 7; ++index){
            for (int j = 1; j < 7; j++) {
                bool run = false;
                if (nums[index][j] == '#'){
                    if(nums[index+1][j+1] == '#' && nums[index+1][j-1] == '#'){
                        cout << index + 1<< " " << j + 1<< "\n";
                        break;
                    }
                }
            }
        }
    }
}
