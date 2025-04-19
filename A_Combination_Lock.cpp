#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
 
void solve() {
    int n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    long long total=0;
    for(int i=0;i<n;i++){
        int x=s1[i]-'0';
        int y=s2[i]-'0';
        int diff=abs(x-y);
        total+=min(diff,10-diff);
    }
    cout<<total<<endl;
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