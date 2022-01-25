#include <iostream>
#include <string>
using namespace std;
int main() {
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    int a, tmp = 0, up, down; cin >> a;
    for (int i = 1;; i++) {
        tmp += i;
        if (tmp >= a) {
            if (i % 2)up = tmp - a + 1;
            else up = i - (tmp - a);
            down = (i + 1) - up;
            cout << up << "/" << down;
            break;
        }
    }
}
