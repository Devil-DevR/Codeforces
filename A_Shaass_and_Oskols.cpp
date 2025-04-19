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
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        x--;
        int temp=arr[x];
        arr[x]=0;
        if(x!=0)arr[x-1]+=y-1;
        if(x!=n-1)arr[x+1]+=temp-y;
    }
    for(int i:arr){
        cout<<i<<endl;
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