#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k; cin >> n >> k;
    string s;
    for(int i = 97; i < k + 97; i++){
        s.push_back(char(i));
    }

    int c = n - k;
    string answer;
    for(int i = 0; i < n; i++){
        answer.push_back(s[i]);
        if(i > 2 && c > 0){
            i -= 1;
            answer.push_back('a');
            c -= 1;
        }
    }
    cout << answer << "\n";
    return 0;
}