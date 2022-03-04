#include <iostream>
using namespace std;
int main() {
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    int j, ans = 0, flag = 1, n = 1;
    while (true) {
        cin >> n;
        if (!n)break;
        ans = 0;
        for (int i = (n + 1); i <= (2 * n); i++) {
            if (i == 1)continue;
            flag = 1;
            for (j = 1; j * j <= i; j++) {
                if (j != 1 && !(i % j)) {
                    flag = 0; break;
                }
            }
            if (flag)ans++;
        }
        cout << ans << "\n";
    }
}