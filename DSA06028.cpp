#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> sx(int a[], int n){
    vector <vector<int>> v1;
    for(int i = 0; i < n - 1; i++){
        int id = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[id]){
                id = j;
            }
        }
        swap(a[i], a[id]);
        vector <int> v;
        for(int x = 0; x < n; x++){
            v[x] = a[x];
        }
        v1.push_back(v);
    }
    return v1;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int &i : a) cin >> i;
    vector<vector<int>> v = sx(a, n);
    for(int i = v.size() - 1; i >= 0; i--){
        for(int j = 0; j < n; j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}