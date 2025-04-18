#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
 
void solve() {
    int row,col;
    cin>>row>>col;
    vector<vector<char>> arr(row,vector<char>(col));
    vector<bool> r(row,true);
    vector<bool> c(col,true);
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
            if(arr[i][j]=='S'){
                r[i]=false;
                c[j]=false;
            }
        }
    }
    for(int i=0;i<row;i++){
        if(r[i]==false)continue;
        for(int j=0;j<col;j++){
            arr[i][j]='1';
        }
    }
    for(int j=0;j<col;j++){
        if(c[j]==false)continue;
        for(int i=0;i<row;i++){
            arr[i][j]='1';
        }
    }
    int count=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]=='1')count++;
        }
    }
    cout<<count<<endl;
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