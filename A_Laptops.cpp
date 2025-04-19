#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
 
void solve() {
    int n;
    cin>>n;
    vector<pair<int,int>> arr;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        arr.push_back({x,y});
    }
    sort(arr.begin(),arr.end());
    bool flag=false;
    for(int i=1;i<n;i++){
        if(arr[i-1].second>arr[i].second)flag=true;
    }
    if(flag)cout<<"Happy Alex\n";
    else cout<<"Poor Alex\n";
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