#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
 
void solve() {
    unordered_map<int,string>mp;
    mp[0]="O-|-OOOO";
    mp[1]="O-|O-OOO";
    mp[2]="O-|OO-OO";
    mp[3]="O-|OOO-O";
    mp[4]="O-|OOOO-";
    mp[5]="-O|-OOOO";
    mp[6]="-O|O-OOO";
    mp[7]="-O|OO-OO";
    mp[8]="-O|OOO-O";
    mp[9]="-O|OOOO-";
    int n;
    cin>>n;
    if(n==0)cout<<mp[0]<<endl;
    while(n>0){
        int x=n%10;
        cout<<mp[x]<<endl;
        n/=10;
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