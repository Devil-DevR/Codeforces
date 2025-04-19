#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

void h(string s,long long& cnt){
    vector<int> hash(10,0);
    for(char i:s){
        hash[i-'0']++;
    }
    long long sum=0;
    for(int i=0;i<10;i++){
        sum+=i*hash[i];
    }
    s=to_string(sum);
    if(s.length()>1)h(s,cnt);
    cnt++;
}


void solve() {
    string s;
    cin >> s;
    long long cnt=0;
    if(s.length()>1)h(s,cnt);
    cout<<cnt<<endl;
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