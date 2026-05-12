#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int operations = 0;
        int sum = 0;
        int mult = 1;
        for(int i = 0; i < n;i++){
            int x;
            cin >> x;
            mult *= x;
            sum += x;
        }
        if (mult == -1){
            operations += 1;
            sum += 2;
        }
        if (sum < 0){
            if ((-1*sum)%2 == 1){
                operations += (-1 * sum)/2 + 2;
            }
            else{
                operations += (-1 * sum)/2;
            }
        }
        cout << operations << "\n";
    }
}