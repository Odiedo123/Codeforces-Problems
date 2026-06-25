#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main(){
    unordered_map<string, int> lead;
    lead["Jed"] = 10;
    lead["First"] = 20;
    lead["Second"] = 0;

    for (auto& pair : lead) {
        cout << pair.first << ": " << pair.second << endl;
    }

}