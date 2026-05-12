#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int multiplication = 1,
        sum = 0,
        operations = 0;

        for(int i = 0; i < n; i++){
            int num;
            cin >> num;
            multiplication *= num;
            sum += num;
        }

        if (multiplication == -1){
            operations += 1;
            sum += 2;
        }
        if (sum < 0){
            sum *= -1;
            if (sum % 4 == 0){
                operations += sum/2;
            }
            else{
                if(sum <= 3){
                    operations += 2;
                }
                else{
                    operations += 2*(sum/4 + 1);
                }
            }
        }
        cout << operations << "\n";
    }
}