#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main () {

    int arr[21];
    for(int i = 1; i <= 20; i++) {
        arr[i] = i;
    }

    freopen("input.txt", "r", stdin);

    for(int i = 0; i < 10; i++) {
        int start, end;
        cin >> start;
        cin >> end;
        reverse(arr+start, arr+end + 1);
    }

    for(int i = 1; i <= 20; i++) {
        cout << arr[i] << ' ';
    }
}