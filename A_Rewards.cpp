#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
 
void solve() {
    int a1,a2,a3,b1,b2,b3;
    cin>>a1>>a2>>a3>>b1>>b2>>b3;
    int n;
    cin>>n;
    int cups=a1+a2+a3;
    int medal=b1+b2+b3;
    int total=ceil(cups/5.0)+ceil(medal/10.0);
    if(total<=n)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

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