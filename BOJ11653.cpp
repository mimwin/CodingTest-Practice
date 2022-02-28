#include <iostream>
#include <string>
int arr[10005];
using namespace std;
int main() {
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    int n, num = 2; cin >> n;
    if (n == 1)cout << "";
    while (n > 1) {
        if (!(n % num)) {
            cout << num << "\n";
            n /= num;
        }
        else num++;
    }
}