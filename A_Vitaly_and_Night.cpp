#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
 
void solve() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(2*m));
    for(int i=0;i<n;i++){
        for(int j=0;j<2*m;j++){
            cin>>arr[i][j];
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][2*j+1]||arr[i][2*j])cnt++;
        }
    }
    cout<<cnt<<endl;

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