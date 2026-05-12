#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string a,b;
        char a_, b_;
        cin >> a >> b;
        b_ = b[0];
        a_ = a[0];
        a[0] = b_;
        b[0] = a_;
        cout << a <<" "<< b << "\n";
    }
}
