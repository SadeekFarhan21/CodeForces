#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a; cin >> a;
    set <int> s;
    for(int i = 0; i < a; i++){
        int b; cin >> b;
        s.insert(b);
    }
    int b; cin >> b;
    for(int i = 0; i < b; i++){
        int b; cin >> b;
        s.insert(b);
    }
    if(s.size() == n){
        cout << "I become the guy.\n";
    }
    else {
        cout << "Oh, my keyboard!\n";
    }
    return 0;
}