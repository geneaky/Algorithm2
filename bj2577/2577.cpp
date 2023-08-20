#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);

    int A,B,C;

    cin >> A;
    cin >> B;
    cin >>C;

    int ret = A*B*C;

    string str = to_string(ret);

    char* array = new char[str.length() + 1];
    strcpy(array, str.c_str());

    int arr[10] = {};
    for(int i = 0; i < str.length(); i++) {
        int temp = array[i] - '0';
        arr[temp]+=1;
    }

    for(int i = 0; i < 10; i++) {
        cout << arr[i] << endl;
    }
}