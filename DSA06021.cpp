#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int n, int x){
    int l = 0, r = n - 1;
    while(l <= r){
        int m = (l + r) / 2;
        if(x > a[m]) l = m + 1;
        else if(x < a[m]) r = m - 1;
        else return m + 1;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int a[n];
        for(int &i : a) cin >> i;
        sort(a, a + n);
        cout << binarySearch(a, n, x) << endl;
    }
    return 0;
}