#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
 
void solve() {
    int a,b;
    cin>>a>>b;
    int first=0,draw=0,second=0;
    for(int i=1;i<=6;i++){
        if(abs(a-i)<abs(b-i))first++;
        if(abs(a-i)==abs(b-i))draw++;
        if(abs(a-i)>abs(b-i))second++;
    }
    cout<<first<<" "<<draw<<" "<<second<<endl;
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