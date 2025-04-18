#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
 
void solve() {
    int angle;
    cin>>angle;
    vector<int> arr={60,90,108,120,135,140,144,150,156,160,162,165,168,170,171,172,174,175,176,177,178,179};
    bool flag=false;
    for(int i:arr){
        if(i==angle){flag=true;break;}
    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


    // double n=360.0/(180.0-angle);
    // if(n>=3 && abs(n-round(n))<1e-9)cout<<"YES"<<endl;
    // else cout<<"NO"<<endl;
}

int main() {
    fastIO(); 
 
    int t = 1;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}