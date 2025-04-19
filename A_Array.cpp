#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
 
void solve() {
    int n;
    cin>>n;
    vector<int> arr(n);
    int zero=0,pos=0,neg=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==0) zero++;
        else if(arr[i]>0) pos++;
        else neg++;
    }
    bool flag=false;
    vector<int> one;
    vector<int> two;
    vector<int> three;
    for(int i:arr){
        if(i==0)three.push_back(i);
        else if(i<0)one.push_back(i);
        else two.push_back(i);
    }
    if(pos==0&&neg>2){
        two.push_back(one.back());
        one.pop_back();
        two.push_back(one.back());
        one.pop_back();
        neg-=2;
    }        
    if(neg%2==0)flag=true;
    if(flag){
        three.push_back(one.back());
        one.pop_back();
    }
    cout<<one.size()<<" ";
    for(int i:one)cout<<i<<" ";
    cout<<endl<<two.size()<<" ";
    for(int i:two)cout<<i<<" ";
    cout<<endl<<three.size()<<" ";
    for(int i:three)cout<<i<<" ";
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