#include <iostream>
#include <string>


int main(){
    int t;
    std::cin >> t;
    while (t--){
        int total = 0;
        std::string alpahbet = "abcdefghijklmnopqrstuvwxyz";
        std::string s;
        std::cin >> s;

        for (int i = 0; i < 26; i++){
            if (alpahbet[i] == s[0]){
                total = i*25;

                for (int y = 0; y < 26; y++){
                    if (alpahbet[y] == s[1]){
                        total = total + y;
                        }
                }
            }
            else{
                continue;
            }
        }
        std::cout << total << "\n";
    }
}