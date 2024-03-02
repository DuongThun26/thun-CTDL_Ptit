#include<bits/stdc++.h>
using namespace std;
int n, k, a[100];
bool ok = true;
void Init(){
    for(int i = 0; i < k; i++){
        a[i] = 'A' + i;
    }
}
void result(){
   for(char x : a) cout << x << " ";
    cout << endl;
}
void Next(){
    int i = n - 1;
    while(i >= 0 && a[i] == n - k + i + 1 + 'A'){
        i--;
    }
    if(i >= 0){
        a[i] = a[i] + 1;
        for(int j = i + 1; j < k; j++){
            a[j] = a[i] + j - i;
        }
    }
    else ok = false;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        char a[k];
        ok = true;
        Init();
        while(ok){
            result();
            Next();
        }
    }
    return 0;
}