#include <iostream>
#include <string>

using namespace std;

int main(){
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int position = 0,position1, position2 ;
        for(int i = 0;i < alphabet.size(); i++){
            if (s[0] == alphabet[i]){
                position1 = i;
            }
            if (s[1] == alphabet[i]){
                position2 = i;
            }
        }
        position += (25*(position1));
        if (position2 > position1){
            position += position2;
        }
        else{
            position += position2 + 1 ;
        }
        cout << position << "\n";

    }
}