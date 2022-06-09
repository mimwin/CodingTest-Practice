#include <iostream>
#include <string>
int arr[10005];
using namespace std;
int main() {
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    int n, a, b, ans = 0, j, min = 0; cin >> a >> b;
    if (a == 1)a++;
    for (int i = a; i <= b; i++) {
        for (j = 1; j <= (i / 2); j++) if (j != 1 && !(i % j))break;
        if (j == (i / 2) + 1) {
            if (ans == 0)min = i;
            ans += i;
        }
    }
    if (ans == 0 && min == 0)cout << "-1";
    else cout << ans << "\n" << min;
}