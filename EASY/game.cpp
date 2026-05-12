#include <iostream>

using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){
    int n;
    cin >> n;
    if (n > 4 || n <= 1){
        cout << "Alice" << "\n";
    }
    else{
        cout << "Bob" << "\n";
    }
   }     
}