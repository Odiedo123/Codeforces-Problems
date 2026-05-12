#include <iostream>
#include <string>

using namespace std;

int main(){
    string word;
    int count = 0;
    int ans;
    cin >> word;
    for(int i = 0; i < word.size(); i++){
        if (word[i] == 'a'){
            count += 1;
        }
    }
    if (word.size() >= 2*count){
        ans = count*2 -1;
    }
    else{
        ans = word.size();
    }
    cout << ans << "\n";
}