#include <bits/stdc++.h>

using namespace std;
int n, m;


int main(){
    vector<vector<int>> grid;
    string str;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> str;
        // cout << typeid('#').name();
        // cout << typeid(str).name();
        // istringstream ss(str);
        for(int j = 0; j < n; j++){
            cin >> grid[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}