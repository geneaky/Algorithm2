#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    freopen("input.txt", "r", stdin);

    int arr[5];

    int average = 0;

    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
        average += arr[i];
    }

    sort(arr, arr+5);
    cout << average/5 << endl;
    cout << arr[2];
}