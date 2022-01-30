#include <iostream>
#include <string>
using namespace std;
int main() {
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    int a, b, v, tmp, n; cin >> a >> b >> v;
    n = (v - a) / (a - b);
    if (a == v)tmp = 0;
    else if (v < (2 * a - b))tmp = 1;
    else tmp = (v - a) % (a - b) ? n + 1 : n;
    cout << tmp + 1;
}