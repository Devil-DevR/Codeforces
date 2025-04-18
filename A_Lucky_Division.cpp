#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
 
void solve() {
    int n;
    cin>>n;
    bool flag=false;
    vector<int> arr={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    for(int i:arr){
        if(n%i==0){flag=true;break;}
    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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