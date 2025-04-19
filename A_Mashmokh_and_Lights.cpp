#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
 
void solve() {
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < m; i++){
            int x;
            cin>>x;
            for(int j=x-1;j<n;j++){
                if(a[j]==0)a[j]=x;
            }
    }
    for(int i:a)cout<<i<<" ";
    

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