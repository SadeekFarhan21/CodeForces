#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    
    /*
        !! My Solution that didn't work
    */
        map <int, char> m = {
            {0, 'V'},
            {1, 'R'},
            {2, 'O'},
            {3, 'Y'},
            {4, 'G'},
            {5, 'B'},
            {6, 'I'},
        };

        for(int i = 1; i <= n; i++){
            cout << m[i % 7];
        }
        cout << "\n";
        return 0;
    
    /*
    map <int, string> m = {
        {1, "G"},
        {2, "GB"},
        {3, "YGB"},
        {4, "YGBI"},
        {5, "OYGBI"},
        {6, "OYGBIV"}
    };

    for(int i = 0; i < (n / 7); i++){
        cout << "ROYGBIV";
    }
    cout << m[n % 7] << "\n";
    return 0;
    */
}