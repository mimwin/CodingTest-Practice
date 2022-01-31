#include <iostream>
#include <string>
using namespace std;
int main() {
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    int n, N, H, W; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> H >> W >> N;
        int tmp = N / H;
        if (N < H)cout << N * 100 + 1 << "\n";
        else if (!(N % H))cout << H * 100 + tmp << "\n";
        else cout << 100 * (N - tmp * H) + tmp + 1 << "\n";
    }
}