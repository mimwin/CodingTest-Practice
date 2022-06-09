#include <iostream>
using namespace std;
int main() {
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    int a, b, j, flag = 1; cin >> a >> b;
    for (int i = a; i <= b; i++) {
        flag = 1;
        if (i == 1)continue;
        for (j = 1; j * j <= i; j++) {
            if (j != 1 && !(i % j)) {
                flag = 0;
                break;
            }
        }
        if (flag)cout << i << "\n";
    }
}