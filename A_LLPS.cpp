#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
 
void solve() {
    string s;
    cin>>s;
    vector<int>arr(26,0);
    for(char i:s){
        arr[i-'a']++;
    }
    char ch='a';
    int cnt=0;
    for(int i=0;i<26;i++){
        if(arr[i]==0)continue;
        ch=(char)(i+'a');
        cnt=arr[i];
    }
    for(int i=0;i<cnt;i++){
        cout<<ch;
    }
    cout<<endl;
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