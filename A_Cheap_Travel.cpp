#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, a, b; cin >> n >> m >> a >> b;
    int p1 = b * (n / m) + (n % m) * a;
    int p2 = b * (n / m + 1);
    int p3 = n * a;
    cout << min(min(p1, p2), p3) << "\n";
}