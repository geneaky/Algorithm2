#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int maxNumber = -1;
    int maxNumberIdx = -1;

    freopen("input.txt", "r", stdin);

    for(int i = 0; i < 9; i++) {
        int temp = 0;
        cin >> temp;

        if(temp > maxNumber) {
            maxNumber = temp;
            maxNumberIdx = i+1;
        }
    }

    cout << maxNumber << endl;
    cout << maxNumberIdx;
}