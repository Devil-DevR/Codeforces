#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
 
void solve() {
    int n;
    cin>>n;
    int a=0,b=0,c=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(i%3==0) a+=x;
        else if(i%3==1) b+=x;
        else c+=x;
    }
    if(a>max(b,c))cout<<"chest"<<endl;
    else if(b>max(a,c))cout<<"biceps"<<endl;
    else cout<<"back"<<endl;
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