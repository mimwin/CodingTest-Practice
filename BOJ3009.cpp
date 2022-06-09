#include <iostream>
using namespace std;
int main() {
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    int a, b, c, d, e, f, ansa, ansb;
    cin >> a >> b >> c >> d >> e >> f;
    if (a == c)ansa = e; else if (a == e)ansa = c; else if (c == e)ansa = a;
    if (b == d)ansb = f; else if (b == f)ansb = d; else if (d == f)ansb = b;
    cout << ansa << " " << ansb;
}