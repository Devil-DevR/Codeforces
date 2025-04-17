#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
 
void solve() {
    int n;
    cin>>n;
    int temp=n-10;
    if(temp<10&&temp>0)cout<<4<<endl;
    else if(temp==10)cout<<15<<endl;
    else if(temp==11)cout<<4<<endl;
    else cout<<0<<endl;
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