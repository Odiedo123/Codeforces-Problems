#include <iostream>
#include <string>

using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n,s,m, count2 = 0, prev;
        long long first = 0;
        string result = "NO";
        cin >> n >> s >> m;
        long long original_n = n;
        while(n--){
            long long l, r, interval = 0;
            cin >> l >> r;
            if(first == 0){
                interval = l;
                prev = r;
                first = 1;
            }
            else{
                interval = l-prev;
                prev = r;
            }

            if (interval >= s){
                result = "YES";
            }
            
            if(count2 == original_n - 1){
                interval = m - r;
            }

            if (interval >= s){
                result = "YES";
            }
            count2 += 1;
        }
        cout << result << "\n";
    }
}