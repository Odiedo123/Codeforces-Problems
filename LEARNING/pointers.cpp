#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int num = 100000; 
    int* ptr = &num;
    cout << ptr << "\n"; 
    cout << *ptr << "\n";
}