#include <iostream>
#include <string>
int arr[10005];
using namespace std;
int main() {
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    string a, b; cin >> a >> b;
    int tmp = 0, c = 1, any, check; any = a.size() > b.size() ? b.size() : a.size();
    while (true) {
        if (c > any)break;
        check = (a[a.size() - c] - '0' + b[b.size() - c] - '0');
        arr[c++] = (check + tmp) % 10;
        tmp = (check + tmp) / 10;
    }
    if (a.size() == b.size()) {
        arr[c] = tmp;
    }
    else if (a.size() > b.size()) {
        while (c <= a.size()) {
            check = a[a.size() - c] - '0';
            arr[c] = (check + tmp) % 10; tmp = (check + tmp) / 10;
            arr[++c] = tmp;
        }
    }
    else if (a.size() < b.size()) {
        while (c <= b.size()) {
            check = b[b.size() - c] - '0';
            arr[c] = (check + tmp) % 10; tmp = (check + tmp) / 10;
            arr[++c] = tmp;
        }
    }
    if (arr[c] != 0)check = c;
    else check = c - 1;
    for (int i = check; i > 0; i--)cout << arr[i];
}