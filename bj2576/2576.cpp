#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);

    vector<int> v;
    int sum = 0;

    for(int i = 0; i < 7; i++) {
        int temp;
        cin >> temp;
        if(temp % 2 != 0) {
            v.push_back(temp);
            sum += temp;
        }
    }

    if(v.size() == 0) {
        cout << -1;
    }else{

        sort(v.begin(), v.end());

        cout << sum << endl;
        cout << v.front();
    }
}