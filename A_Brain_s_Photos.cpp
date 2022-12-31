#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    // vector <char> 
    char v[n][m];
    set <char> s;
    vector <char> c {'C', 'M', 'Y'};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> v[i][j];
            s.insert(v[i][j]);
        }
    }
    for(auto x : s){
        for(int i = 0; i < c.size(); i++){
            if(c[i] == x){
                cout << "#Color " << "\n";
                // v.clear();
                s.clear();
                return 0;
            }
        }
    }
    cout << "#Black&White" << "\n";
    // v.clear();
    s.clear();
    return 0;
}