#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    string s;
    set <string> se;
    for(int i = 0; i < n; i++){
        cin >> s;
        se.push_back(s);
    }
    int x = se.size();
    string x[k];
    for(int i = 0; i < k; i++){
        x[i] = se.begin;
    } 
    for(int i : x) cout << i << " " << endl;
    return 0;
}