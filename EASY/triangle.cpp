#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int x = a,y = b,z = c;
        int x1 = b,y1 = c,z1= d;
        if (x + y > z){
            if (y + z > x){
                if (x + z > y){
                    cout << x << " " << y << " " << z << "\n";
                }
                else{
                    cout << x << " " << y << " " << z << "\n";
                }
            }
            else{
                cout << x << " " << y << " " << z << "\n";
            }
        }
        else{
            cout << x << " " << y << " " << z << "\n";
        }
    }

}
