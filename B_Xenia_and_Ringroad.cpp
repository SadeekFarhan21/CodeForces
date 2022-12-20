#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    // n --> distance of the clock
    // m --> sequence of the houses in the block

    vector <int> a(m); // vector of all the elements
    for(int i = 0; i < m; i++){
        cin >> a[i]; 
    }

    /*
    vector <int> v = a;
    sort(v.begin(), v.end());
    if(a == v){
        cout << *max_element(v.begin(), v.end()) - 1;
        return 0;
    }
    */
    
    int answer = a[0] - 1; // Initial Staring Position
    for(int i = 0; i < m - 1; i++){
        if(a[i + 1] >= a[i]){ // if next is more than or equal to now
            answer += a[i + 1] - a[i];
        }
        else { // if next is less than now
            answer += n - a[i] + a[i + 1];
        }
    }
    cout << answer << endl;
    return 0;
}