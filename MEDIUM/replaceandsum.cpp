#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n,q;
        vector<int> a;
        vector<int> b;
        vector<int> prefix_sum;
        cin >> n >> q;
        for (int i = 0; i < n; i++){
            int x;
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++){
            int x;
            cin >> x;
            b.push_back(x);
        }
        if (a[n-1] < b[n-1]){
            a[n-1] = b[n-1];
        }
        for (int i = n-2; i >= 0; i--){
            if (a[i] >= a[i+1] && a[i] >= b[i]){
                continue;
            }
            else{
                if (a[i + 1] > b[i]){
                    a[i] = a[i+1];
                }
                else{
                    a[i] = b[i];
                }
            }
        }
        prefix_sum.push_back(a[0]);
        for (int i = 1 ; i < n; i++){
            int y;
            y = a[i] + prefix_sum[i-1];
            prefix_sum.push_back(y);
        }

        for (int i = 0; i < q; i++){
            int l,r;
            cin >> l >> r;
            if (l != r){
                if (l == 1){
                    cout << prefix_sum[r-1] + a[0] - prefix_sum[0] << "\n";
                }
                else{
                cout << prefix_sum[r-1] -  prefix_sum[l-2] << "\n";
                }
            }
            else{
                cout << a[l-1] << "\n";
            }
           
        }
    }
}