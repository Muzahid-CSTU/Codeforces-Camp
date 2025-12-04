#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin >> a;
    int n = a.size();
    multiset<char> s;
    for(int i=0;i<n;i++){
        if(a[i] != '+') s.insert(a[i]);
    }
    n = 0;
    for(auto x : s){
        if(n>0) cout << "+";
        cout << x;
        n=1;
    }
    cout << endl;
}