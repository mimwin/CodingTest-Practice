#include <iostream>
#include <string>
using namespace std;
int main() {
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    int s, k, n; cin >> s;
    for (int i = 0; i < s; i++) {
        int arr[15] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
        cin >> k >> n;
        for (int j = 0; j < k; j++) for (int z = 1; z < n; z++) arr[z] += arr[z - 1];
        cout << arr[n - 1] << "\n";
    }
}