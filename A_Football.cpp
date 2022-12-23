#include <bits/stdc++.h>
using namespace std;


int main(){
    int t; cin >> t;
    map <string, int> m;
    for(int i = 0; i < t; i++){
        string s; cin >> s;
        if(m.find(s) == m.end()){
            m.insert({s, 1});
        }
        else {
            m[s]++;
        }
    }
    // finding the most common element
    int max = 0;
    string answer;
    for(auto x : m){
        if(x.second >= max){
            max = x.second;
            answer = x.first;
        }
    }
    cout << answer << "\n";
    return 0;
}