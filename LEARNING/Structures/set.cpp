#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int> no_dup;
    for (int i = 0; i < 5; i ++){
        int x;
        cin >> x;
        no_dup.emplace(x);
    }
    cout << no_dup.size() << "\n";

    for (int element : no_dup){
        cout << element << "\n";
    }
}