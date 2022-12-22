#include <bits/stdc++.h>
using namespace std;

int main(){
    map <char, long long> m;
    for(char i = '1'; i <= '4'; i++){
        long long a; cin >> a;
        m.insert({i, a});
    }

    string s; cin >> s;
    long long answer = 0;
    for(int i = 0; i < s.length(); i++){
        answer += m[s[i]];
    }
    cout << answer << "\n";
    return 0;
}