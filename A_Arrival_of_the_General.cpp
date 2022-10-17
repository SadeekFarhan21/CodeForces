#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int max = *max_element(v.begin(), v.end());
    int min = *min_element(v.begin(), v.end());
    
    int minIndex, maxIndex;

    for(int i = 0; i < n; i++){
        if(v[i] == max){
            maxIndex = i;
            break;
        } 
    }

    for(int i = 0; i < n; i++){
        if(v[i] == min){
            minIndex = i;
            break;
        }
    }
        
    int answer = maxIndex + n - 1 - minIndex;
    if(maxIndex > minIndex){
        answer -= 2;
    }
    cout << answer << "\n";
}