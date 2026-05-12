#include <iostream>
#include <vector>

using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y,k;
        cin >> x >> y >> k;
        int val = y - x%y;
        while(k >= val && x > 1){
            x += val;
            k -= val;
            while(x % y == 0){
                x = x/y;
            }
            val = y - x%y;
        }
        if(x == 1){
            x += k % (y-1);
        }
        else{
            x += k;
        }
        cout << x << "\n";
    }
}