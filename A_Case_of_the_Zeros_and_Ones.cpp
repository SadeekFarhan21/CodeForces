#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n; cin >> n;
    string s; cin >> s;

    while(true){
        if(s.find("01") == string::npos && s.find("10") == string::npos){
            break;
        }
    
        if(s.find("01") != string::npos){
            s.erase(s.find("01"), s.find("01") + 1);    
        }                
        else if(s.find("10") != string::npos){
            s.erase(s.find("10"), s.find("10") + 1);
        }  
        cout << s << "\n";
    }   

    cout << s.length() << endl;
    return 0;
}