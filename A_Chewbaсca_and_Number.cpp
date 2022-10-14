#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, answer; cin >> s;
    for(int i = 0; i < s.length(); i++){
        answer += to_string(min(s[i]- '0', '9' - s[i]));
    }
    if(answer[0] == '0'){
      answer[0] = '9';
    }
    cout << answer << "\n";
    return 0;
}