#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    set <int> s;

    for(int i = 0; i < n; i++){
        int a; cin >> a;
        s.insert(a);
    }

    if(n < 2){
        cout << "NO" << "\n";
        return 0;
    }
    set <int> ::iterator it = s.begin(); 
    ++it;
    cout << *it << "\n";
    return 0;
}