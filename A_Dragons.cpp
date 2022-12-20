#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    bool d = true;
    int s, n; cin >> s >> n;
    for(int i = 0; i < n; i++){
        int a, b; cin >> a >> b;
        if(s > a){
            s += b;
        }
        else {
            d = false;
            break;
        }
        cout << s << " ";
    }
    
    string result = (d) ? "YES" : "NO";
    cout << result << "\n";
    return 0;
}