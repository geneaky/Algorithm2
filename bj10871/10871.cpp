#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);

    int number, target;
    cin >> number;
    cin >> target;

    for(int i = 0; i < number; i++) {
        int temp;
        cin >> temp;
        if(temp < target) {
            cout << temp << ' ';
        }
    }
}