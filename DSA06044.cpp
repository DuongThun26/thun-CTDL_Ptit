#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int &i : a) cin >> i;
    sort(a, a + n);
    int b[n];
    for(int i = 0; i < n; i+= 2){
        b[i] = i + 1;
    }
    for(int i = 1; i < n; i+= 2){
        b[i] = n - i + 1;

    }
    for(int i : b) cout << i << " ";
    return 0;
}