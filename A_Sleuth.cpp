#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    cout << s << " ";
    if(s[s.length() - 2] == 'a' || s[s.length() - 2] == 'e' || s[s.length() - 2] == 'o' || s[s.length() - 2] == 'u' || s[s.length() - 2] == 'y' || s[s.length() - 2] == 'A' || s[s.length() - 2] == 'E' || s[s.length() - 2] == 'O' || s[s.length() - 2] == 'U' || s[s.length() - 2] == 'Y'){
        cout << "YES" << "\n";
    }
    else {
        cout << "NO" << "\n";
    }
    return 0;
}