#include <iostream>
using namespace std;
int main() {
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    int a = 1, b = 1, c = 1;
    while (a && b && c) {
        cin >> a >> b >> c;
        if (c > a&& c > b) {
            if (c * c - a * a - b * b)cout << "wrong" << "\n";
            else cout << "right" << "\n";
        }
        if (a > c&& a > b) {
            if (a * a - c * c - b * b)cout << "wrong" << "\n";
            else cout << "right" << "\n";
        }
        if (b > a&& b > c) {
            if (b * b - a * a - c * c)cout << "wrong" << "\n";
            else cout << "right" << "\n";
        }
    }
}