#include <iostream> 
#include <vector>
using namespace std;
int main() {
    int arr[6];
    vector<int> v;
    int index, d, r1, r2;
    cin >> index;
    for (int i = 0; i < index; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> arr[j];
        }
        d = pow(arr[0] - arr[3], 2) + pow(arr[1] - arr[4], 2);
        r1 = arr[2];
        r2 = arr[5];

        if (arr[0] == arr[3] && arr[1] == arr[4] && r1 == r2) {
            v.push_back(-1);
        }
        else if (d == pow(r1 - r2, 2) || d == pow(r1 + r2, 2)) {
            v.push_back(1);
        }
        else if (d > pow(r1 - r2, 2) && d < pow(r1 + r2, 2)) {
            v.push_back(2);
        }
        else if (d < pow(r1 - r2, 2) || d > pow(r1 + r2, 2)) {
            v.push_back(0);
        }
    }
    for (auto s : v) {
        cout << s << endl;
    }
}