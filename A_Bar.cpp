#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, count = 0; cin >> n;
    vector <string > v {"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        bool f = false;
        for(int j = 0; j < v.size(); j++){
            if(s == v[j]){
                f = true;
                break;
            }

        }
        if(!f) count++; break;
        stringstream ss;
        ss << s;
        int a;
        ss >> a;
        if(a > 18){
            count++;
        }
    }
    cout << count << "\n";
}