#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);

    for(int i = 0; i < 3; i++) {
        int back = 0;
        int front = 0;
        int number = 0;
        for(int j = 0; j < 4; j++) {
            cin >> number;
            if(number == 0) {
                back++;
            }else{
                front++;
            }
        }

        if(back == 1) {
            cout << "A" << endl;
        }else if (back == 2) {
            cout << "B" << endl;
        }else if (back == 3) {
            cout << "C" << endl;
        }else if (back == 4) {
            cout << "D" << endl;
        }else {
            cout << "E" << endl;
        }
    }
}