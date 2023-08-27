#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    freopen("input.txt", "r", stdin);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;
    for(int i = 0; i < N; i++) {
        int A,B;
        cin >> A;
        cin >> B;
        cout << A+B << '\n';
    }
}