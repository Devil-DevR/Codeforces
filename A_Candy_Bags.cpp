#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
 
void solve() {
    int n;
    cin>>n;
    int i=0,low=1,high=n*n;
    while(i<n){
        for(int j=0;j<n/2;j++){
            cout<<low+j<<" "<<high-j<<" ";
        }
        cout<<endl;
        low+=n/2;
        high-=n/2;
        i++;
    }
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