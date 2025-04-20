#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
 
void solve() {
    int n;
    cin>>n;
    string s,ans="";
    cin>>s;
    int stand=0,sit=0;
    for(char i:s)if(i=='x')sit++;else stand++;
    if(stand>(n/2)){
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='X')count++;
            if(count>(n/2))ans+='x';
            else ans+=s[i];
        }
        cout<<stand-(n/2)<<endl;
        cout<<ans<<endl;
    }
    else if(sit>(n/2)){
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='x')count++;
            if(count>(n/2))ans+='X';
            else ans+=s[i];
        }
        cout<<sit-(n/2)<<endl;
        cout<<ans<<endl;
    }
    else {
        cout<<0<<endl;
        cout<<s<<endl;
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