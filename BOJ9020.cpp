#include <iostream>
using namespace std;
bool findprim(int num) {
    bool flag = true;
    for (int z = 1; z * z <= num; z++) {
        if (z != 1 && !(num % z)) {
            flag = false;
            break;
        }
    }
    return flag;
}
int main() {
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    int n, a, tmp, flag = 1; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        tmp = (a / 2);
        if (a % 2)tmp += 1;
        for (int j = tmp; j > 1; j--)
            if (findprim(j))
                if (findprim(a - j)) {
                    (a - j) > j ? cout << j << " " << (a - j) << "\n" : cout << (a - j) << " " << j << "\n";
                    break;
                }
    }
}