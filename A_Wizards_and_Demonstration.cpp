#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
 
void solve() {
    int n,x;
    cin>>n>>x;
    float y;
    cin>>y;
    float mn=(y*n)/100.0;
    cout<<max(0,int(ceil(mn))-x)<<endl;
}

int main() {
    fastIO(); 
 
    int t = 1;
    // cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}