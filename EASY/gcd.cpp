#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int num;
        int result;
        cin >> num;
        if (num%2 == 0){
            result = num/2;
        }
        else{
            num -= 1;
            result  = num/2;
        }
        cout << result << "\n";
    }
}
