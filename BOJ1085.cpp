#include <iostream>
using namespace std;
int main() {
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    int x, y, w, h, min = 1001, dis; cin >> x >> y >> w >> h;
    if (x > (w / 2)) {
        if (y > (h / 2)) dis = w - x < h - y ? w - x : h - y;
        else dis = w - x < y ? w - x : y;
    }
    else {
        if (y > (h / 2)) dis = x < h - y ? x : h - y;
        else dis = x < y ? x : y;
    }
    cout << dis;
}