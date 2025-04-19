#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
void generate_lucky_numbers(long long max_value, vector<long long>& result) {
    queue<std::string> q;
    q.push("4");
    q.push("7");

    while (!q.empty()) {
        string curr = q.front();
        q.pop();

        long long num = std::stoll(curr);
        if (num > max_value) continue;

        result.push_back(num);

        if (num * 10 + 4 <= max_value) q.push(curr + "4");
        if (num * 10 + 7 <= max_value) q.push(curr + "7");
    }
}
 
void solve() {
    long long x,y;
    cin>>x>>y;
    vector<long long> arr;
    generate_lucky_numbers(10000000000LL,arr);
    sort(arr.begin(),arr.end());

    long long sum=0,start=x;
    int idx = (int)(lower_bound(arr.begin(), arr.end(), x) - arr.begin());
    int n=arr.size();
    for(int i=idx;i<n;i++){
        long long end=min(y,arr[i]);
        if(end<start)continue;
        long long length=end-start+1;
        sum+=length*arr[i];
        if(end==y)break;
        start=end+1;
    }
    cout<<sum<<endl;
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