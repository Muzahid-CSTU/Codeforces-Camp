#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int ans = 0;
	while(n--){
	    int a,b,c;
	    cin >> a >> b >> c;
	    int d = a+b+c;
	    if(d >= 2) ans++;
	}
	cout << ans << endl;

}
