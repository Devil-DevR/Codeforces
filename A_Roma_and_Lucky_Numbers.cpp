#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

bool check(int n,int k){
    int temp=0;
    while(n>0){
        int x=n%10;
        if(x==7||x==4)temp++;
        n/=10;
    }
    if(temp<=k)return true;
    else return false;
}

void solve() {
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int cnt=0;
    for(int i:arr){
        if(check(i,k))cnt++;
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