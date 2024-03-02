#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for(int &i : a) cin >> i;
        for(int &i : b) cin >> i;
        int cnt = 0;
        sort(b, b + m, greater<int>());
        sort(a, a + n);
        int i = 0, j = 0;
        while(i < n && j < m){
            if(b[j] > a[i]){
                cnt += n - i;
                j++;
            }
            else i++;
        }
        cout << cnt << endl;
    }
    return 0;
}