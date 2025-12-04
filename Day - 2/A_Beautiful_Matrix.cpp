#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    int ar[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >> ar[i][j];
            if(ar[i][j] == 1){
                a = abs(i-2) + abs(j-2);
            }
        }
    }
    cout << a << endl;
}