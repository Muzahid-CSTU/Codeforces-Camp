#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin >> a;
    int n = a.size();
    set<char> s;
    for(int i=0;i<n;i++){
        s.insert(a[i]);
    }
    if(s.size()%2 == 0) cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;
}