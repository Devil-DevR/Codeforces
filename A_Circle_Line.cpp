#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
 
void solve() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int x,y;
    cin>>x>>y;
    x--,y--;
    int sum = accumulate(arr.begin(), arr.end(), 0);
    int temp=0;
    for(int i=min(x,y);i<max(x,y);i++){
        temp+=arr[i];
    }
    cout<<min(temp,sum-temp)<<endl;
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