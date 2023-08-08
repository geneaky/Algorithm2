#include <iostream>
#include <algorithm>

using namespace std;

int N;

int main () {
    freopen("input.txt", "r", stdin);

    cin >> N;

    if(N%4==0 && (N%100!=0 || N%400==0)) {
        cout << 1;
    }else{
        cout << 0;
    }
}