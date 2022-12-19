#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int t; cin >> t;
    vector <string> v(t);
    for(int i = 0; i < t; i++){
        cin >> v[i];
    }

    for(int i = 0; i < t; i++){
        if(v[i] == s){
            cout << "YES" << "\n";
            return 0;
        }
    }

    bool found1 = false;
    bool found2 = false;
    char first = s[0];
    char second = s[1];

    for(int i = 0; i < t; i++){
        if(first == v[i][1]){
            found1 = true;
        }
        if(second == v[i][0]){
            found2 = true;
        }
    }
    
    if(found1 && found2){
        cout << "YES" << "\n";
    }
    else {
        cout << "NO" << "\n";
    }
    
    return 0;
}