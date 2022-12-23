#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char c; cin >> c;
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string x; cin >> x;
    if(c == 'R'){
        for(int i = 0; i < x.length(); i++){
            cout << s[s.find(x[i]) - 1];
        }
    }
    else {
        for(int i = 0; i < x.length(); i++){
            cout << s[s.find(x[i]) + 1];
        }
    }
    cout << "\n";
}