#include <iostream>
#include <vector>

using namespace std;

int main(){
    int total = 0;
    vector<int> cal;
    for (int i = 0; i < 4; ++i){
        int x;
        cin >> x;
        cal.push_back(x);
    }
    string opps;
    cin >> opps;
    for (int i = 0; i < opps.size(); ++i){
        int y = opps[i] - '0';
        total += cal[y - 1];
    }
    cout << total << "\n";
}