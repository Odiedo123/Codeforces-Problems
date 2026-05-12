#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        int index = 0;
        cin >> n;
        vector<int> final;
        for (int i = 0; i < n; ++i){
            int x;
            cin >> x;
            final.push_back(x);
        }
        while(n--){
            int operations;
            string moves;
            cin >> operations;
            cin >> moves;
            for(int i = 0; i < moves.size(); ++i){
                if (moves[i] == 'D'){
                    final[index] += 1;
                    if (final[index] > 9){
                        final[index] = (final[index]%10);
                    }
                }
                else{
                    final[index] -= 1;
                    if (final[index] < 0){
                        final[index] = (final[index]%10) + 10;
                    }
                }
            }
            index += 1;
        }
        for (int element : final){
            cout << element << " ";
        }
        cout << "\n";

    }
}