#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s; cin >> s;
    int sum = 0;
    int i = 0;
    if(s.length() == 1){
        cout << 0 << "\n";
        return 0;
    }

    while(true){
        i++;
        sum = 0;
        for(int i = 0; i < s.length(); i++){
            sum += s[i] - '0';
            
        }
        if(sum >= 0 && sum <= 9){
            break;
        }
        
        s = to_string(sum);
        // cout << s << endl;
    }
    // cout << sum << "\n";
    cout << i << "\n";
}