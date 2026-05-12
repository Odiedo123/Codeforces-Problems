#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        string num;
        cin >> num;
        int total = 0;
        bool result = false;
        for(int i = 0; i < num.size(); i++){
            int x = num[i] + '0';
            total += x;
            if(x%2==0){
                result = true;
            }
        }
        if(result == true && total%3 == 0){
            cout << "cyan" << "\n";
        }
        else{
            cout << "red" << "\n";
        }
        
    }
}