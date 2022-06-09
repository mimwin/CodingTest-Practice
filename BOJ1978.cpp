#include <iostream>
#include <string>
int arr[10005];
using namespace std;
int main() {
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    int n, num, ans = 0, j; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num == 1)continue;
        for (j = 1; j <= (num / 2); j++) if (j != 1 && !(num % j))break;
        if (j == (num / 2) + 1)ans++;
    }
    cout << ans;
}