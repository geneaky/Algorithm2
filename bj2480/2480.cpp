#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);

    int arr[3];

    for(int i = 0; i < 3; i++) {
        cin >> arr[i];
    }

    sort(arr, arr+3);

    int cnt = 1;
    int start = arr[0];
    for(int i = 1; i < 3; i++) {
        if(start == arr[i]) {
            cnt++;
        }else{
            start = arr[i];
        }
    }

    if(cnt == 3) {
        cout << (10000 + start * 1000);
    }else if(cnt == 2) {
        cout << (1000 + arr[1] * 100);
    }else{
        cout << (arr[0] * 100);
    }

}