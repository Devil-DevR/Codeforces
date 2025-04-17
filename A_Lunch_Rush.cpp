#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
 
void solve() {
    int n,k;
    cin>>n>>k;
    int maximum=INT_MIN;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        maximum=max(maximum,x-max(0,y-k));
    }
    cout<<maximum<<endl;
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