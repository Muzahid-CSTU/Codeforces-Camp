#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    cin >> a >> b;
    int n = a.size();
    for(int i=0;i<n;i++){
        if(a[i] < 'a') a[i] = a[i]+32;
        if(b[i] < 'a') b[i] = b[i]+32;
    }
    if(a == b) cout << 0 << endl;
    else if(a > b) cout << 1 << endl;
    else cout << -1 << endl;
}