#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
 
long long remove(long long x){
    long long res=0;
    while(x>0){
        int temp=x%10;
        if(temp){
            res=res*10+temp;
        }
        x/=10;
    }
    return res;
}
long long reverse(long long x){
    long long res=0;
    while(x>0){
        int temp=x%10;
        res=res*10+temp;
        x/=10;
    }
    return res;

}



void solve() {
    long long a,b;
    cin>>a>>b;
    long long c=a+b;
    long long A=remove(reverse(a));
    long long B=remove(reverse(b));
    long long C=remove(reverse(c));
    // cout<<a<<" "<<b<<" "<<c<<endl;
    // cout<<A<<" "<<B<<" "<<C<<endl;
    if(A+B==C)cout<<"YES"<<endl;
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