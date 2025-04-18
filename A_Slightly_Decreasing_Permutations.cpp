#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
 
void solve() {
    int n,k;
    cin>>n>>k;
    int i=0;
    while(k--){
        cout<<n-i<<" ";
        i++;
    }
    for(int j=1;j<n-i+1;j++)cout<<j<<" ";


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