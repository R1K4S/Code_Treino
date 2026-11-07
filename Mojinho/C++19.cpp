#include <bits/stdc++.h>
using namespace std;
struct Vec2{
    int x,y;
    Vec2 operator+(const Vec2& o) const {
        return  Vec2{ x + o.x, y + o.y};
    }
};
int main(){
    int x,y;
    cin >> x >> y;
    Vec2 a{x,y};
    cin >> x >> y;
    Vec2 b{x,y};
    Vec2 c = a + b;
    cout << c.x << " " << c.y << "\n";
}
