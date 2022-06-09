#include <iostream>
#include <string>
using namespace std;
int main() {
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    long long a, cnt = 1, tmp = 6, i; cin >> a;
    if (a == 1) { cout << "1"; return 0; }
    for (i = 0; a > cnt; i++) cnt += tmp + (6 * i);
    cout << i + 1;
}
