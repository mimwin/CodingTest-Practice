#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
int main() {
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    int a; cin >> a; double u, t;
    u = M_PI * a * a; t = 2 * a * a;
    cout << fixed; cout.precision(6);
    cout << u << "\n" << t;
}