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
    for(int i=0;i<n;i++) cin>>arr[i];
    int sum = accumulate(arr.begin(), arr.end(), 0);
    int cnt=0;
    if(sum%2==0){
        for(int i=0;i<n;i++){
            if(arr[i]%2==0) cnt++;
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(arr[i]%2==1)cnt++;
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