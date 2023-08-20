#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

static vector<long unsigned int> arr;

int main() {
    freopen("input.txt", "r", stdin);

    long long start, end;
    cin >> start;
    cin >> end;

    if(start > end) {
        int temp = start;
        start = end;
        end = temp;
    }


    for(long unsigned int i = start +1; i < end; i++) {
        arr.push_back(i);
    }

    cout << arr.size() << endl;

    sort(arr.begin(), arr.end());
    for(long unsigned int i = 0; i < arr.size(); i++) {
        cout << arr.at(i) << ' ';
    }

}