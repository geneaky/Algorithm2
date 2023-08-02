#include <iostream>
using namespace std;

int N;

int main() {
    freopen("input.txt", "r", stdin);

    cin >> N;

    if(90 <= N && N <= 100) {
        cout << "A";
    }else if(80 <= N && N <= 89) {
        cout << "B";
    }else if(70 <= N && N <= 79) {
        cout << "C";
    }else if(60 <= N && N <= 69) {
        cout << "D";
    }else {
        cout << "F";
    }
}