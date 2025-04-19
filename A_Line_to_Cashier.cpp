#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
 
void solve() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int ans=INT_MAX;
    for(int i:arr){
        int sum=0;
        for(int j=0;j<i;j++){
            int x;
            cin>>x;
            sum+=x*5+15;
        }
        ans=min(ans,sum);
    }
    cout<<ans<<endl;

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