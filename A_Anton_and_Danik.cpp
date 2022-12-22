#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string s; cin >> s;
    if(count(s.begin(), s.end(), 'D') > count(s.begin(), s.end(), 'A')){
        cout << "Danik" << endl;
    }
    else if(count(s.begin(), s.end(), 'D') < count(s.begin(), s.end(), 'A')){
        cout << "Anton" << endl;
    }
    else {
        cout << "Friendship" << endl;
    }
    return 0;
}