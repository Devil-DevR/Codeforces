#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
 
void solve() {
    int n,m;
    cin>>n>>m;
    int sum=(n*(n+1))/2;
    m=m%sum;
    for(int i=1;i<=n;i++){
        if(m>=i)m-=i;
        else break;
    }
    cout<<m<<endl;
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