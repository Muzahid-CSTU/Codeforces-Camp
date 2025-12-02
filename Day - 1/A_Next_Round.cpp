#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    int a = v[k-1];
    if(a == 0) a = 1;
    int ans;
    for(int i=0;i<n;i++){
        if(v[i] >= a){
            ans++;
        }
        else break;
        
    }
    cout << ans << endl;
}