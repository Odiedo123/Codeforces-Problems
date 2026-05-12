#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        int total = 0;
        bool prev_1 = true;
        cin >> n;
        string s;
        cin >> s;

        if(s[0] == '1'){
            prev_1 = true;
            total += 1;
        }

        else{
            if(s.size() == 1){
                total += 1;
            }
            else{
                prev_1 = false;
            }
        }

        for(int i = 1; i < s.size()-1; i++){
            if(s[i] == '1'){
                total += 1;
                prev_1 = true;
            }

            else{
                if(s[i+1] == '0' && prev_1 == false){
                    total += 1;
                    prev_1 = true;
                }
                else{
                    prev_1 = false;
                }
            }
        }
        
        if(prev_1 == false  || s[s.size() - 1] == '1'){
            total += 1;
        }
        cout << total << "\n";
    }
}