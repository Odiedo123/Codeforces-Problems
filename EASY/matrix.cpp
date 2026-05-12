#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int row = 0;
    int row_check = 0;
    int column = 0;
    bool count = true;

    for (int i = 1; i <= 25; i++){
        if (row_check %5 == 0){
            row += 1;
        }
        if (count == true)
            row_check += 1;
            column += 1;
        int x;
        cin >> x;
        if (x == 1){
            cout << column << "\n";
            column = column % 5;
            count = false;
        }
    }

    int moves = abs(row - 2) + abs(column - 2);
    cout << moves << "\n";
    cout << row << "\n" << column;
}