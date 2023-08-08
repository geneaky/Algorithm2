#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);

    int array[3];

    for(int i = 0; i < 3; i++) {
        cin >> array[i];
    }

    sort(array, array+3);

    for(int i = 0; i < 3; i++) {
        cout << array[i] << ' ';
    }    
}