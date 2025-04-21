#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
 
void solve() {
    string s;
    cin>>s;
    int n = s.size();
    set<string>mp;
    for(int i=0;i<=n;i++){
        for(char c='a';c<='z';c++){
            mp.insert(s.substr(0,i)+c+s.substr(i,n));
        }
    }
    cout<<mp.size()<<endl;
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