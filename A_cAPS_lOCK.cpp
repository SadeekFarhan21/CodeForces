#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s; cin >> s;
    
    bool isUpper = true;
    for(int i = 1; i < s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            isUpper = false;
            break;
        }
    }

    if(!isUpper){
        cout << s << "\n";
    }
    
    else {
        for(int i = 0; i < s.size(); i++){
            int diff = s[i] - 'a';
            if(diff >= 0){
                char c = s[i] - 32;
                cout << c;
            }
            else{
                char c = s[i] + 32;
                cout << c;
            }
        }
    }
}