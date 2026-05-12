#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,h;
        long long min = 0;
        long long max = 0;
        long long start = 0;
        vector<long long> a;
        vector<long long> b;
        vector<long long> c;
        vector<long long> net_jumps;
        cin >> n >> h;
        for(long long i = 0; i < n; i++){
            long long x,y,z;
            cin >> x >> y >> z;
            a.push_back(x);
            b.push_back(y);
            c.push_back(z);
            long long val = x*y - z;
            start += x*(y-1);

            net_jumps.push_back(val);
            if(val > min){
                min = val;
            }
            if(val > max){
                max = i;
            }
        }
        if(min == 0){
            cout << -1 << "\n";
        }
        else{
            if(start > h){
                cout << 0 << "\n";
            }
            else{
                long long rollbacks = 0;
                long long jump = net_jumps[max];
                long long c = h - start;
                cout << "Ans: " << c/jump << "\n";
            }

        }

    }
}