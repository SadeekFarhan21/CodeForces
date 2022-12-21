#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s; cin >> s;
    // cout << s << "\n";
    if(s.length() == 1 && (s == "0" || s == "1")){
        cout << 0 << endl;
        return;
    }
    int first, last;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '1'){
            first = i;
            break;
        }
    }
    for(int i = s.length() - 1; i >= 0; i--){
        if(s[i] == '1'){
            last = i;
            break;
        }
    }
    int count = 0;
    for(int i = first; i <= last; i++){
        if(s[i] == '0'){
            count++;
        }
    }
    cout << count << "\n";
}

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
    return 0;
}