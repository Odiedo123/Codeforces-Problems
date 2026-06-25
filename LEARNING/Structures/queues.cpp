#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<int> nums;
    nums.push(10);
    nums.push(20);
    int og;
    og = nums.size();
    for (int i = 0; i < og ; i++){
        cout << nums.front() << "\n";
        nums.pop();
    }
    cout << "See if its empty" << "\n";
    for (int i = 0; i < nums.size() ; i++){
        cout << nums.front() << "\n";
        nums.pop();
    }
}