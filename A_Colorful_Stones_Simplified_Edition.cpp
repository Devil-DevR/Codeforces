#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
 
void solve() {
    string s;
    string t;
    cin>>s>>t;
    int i=0,n=s.size();

    for(char c:t){
        if(s[i]==c){i++;}
        if(i==n)break;
    }
    cout<<i+1<<endl;
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