#include <bits/stdc++.h>
using namespace std;
 
struct Rect {
    int x1, y1, x2, y2;
    int area(){
        return (x2 - x1) * (y2 - y1);
    }
};
 
int intersect(Rect p, Rect q) {
	int xOverlap = max(0, min(p.x2, q.x2) - max(p.x1, q.x1));
	int yOverlap = max(0, min(p.y2, q.y2) - max(p.y1, q.y1));
	return xOverlap * yOverlap;
}
 
int solve(){
    Rect a, b, t;
	cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
	cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
	cin >> t.x1 >> t.y1 >> t.x2 >> t.y2;
 
    int area = a.area() - intersect(a, b) - intersect(a, t);
    if(area <= 0) cout << "NO\n";
    else cout << "YES\n";
 
    return 0;
}