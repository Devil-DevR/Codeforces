#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
 
void solve() {
    int x,y;
    cin>>x>>y;
    if(x<0&&y<0)cout<<(x+y)<<" "<<0<<" "<<0<<" "<<(x+y)<<" "<<endl;
    if(x<0&&y>0)cout<<(x-y)<<" "<<0<<" "<<0<<" "<<(-x+y)<<" "<<endl;
    if(x>0&&y<0)cout<<0<<" "<<-(x-y)<<" "<<x-y<<" "<<0<<" "<<endl;
    if(x>0&&y>0)cout<<0<<" "<<x+y<<" "<<x+y<<" "<<0<<" "<<endl;
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