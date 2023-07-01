#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    map <string, int> m;
    for(int i = 0; i < t; i++){
        string s; cin >> s;
        if(m.count(s) == 0){
            cout << "OK\n";
        }
        else {
            cout << s << m[s] << "\n";
        }
        m[s]++;
    }
    return 0;
}