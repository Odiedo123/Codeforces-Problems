#include <iostream>

using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n, num, sum = 0;
        cin >> n;
        num = n;
        sum += num;
        while(num != 1){
            if (num%2 == 0){
                sum += num/2;
                num = num/2;
            }
            else{
                num -= 1;
                sum += num/2;
                num = num/2;
            }
        }
        cout << sum << "\n";
    }
}