#include <bits/stdc++.h>
using namespace std;
 
void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
 
void solve() {
    int n,vol;
    cin>>n>>vol;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int sum=accumulate(arr.begin(),arr.end());
    int m=*max_element(arr.begin(),arr.end());
    if(sum-m<=vol)cout<<"YES"<<endl;
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