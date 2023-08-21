#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);

    int N;
    cin >> N;

    int arr[N];

    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int yCnt = 0;
    int mCnt = 0;

    for(int i = 0; i < N; i++) {
        yCnt += (arr[i] / 30) * 10;
        if((arr[i]+1) % 30 != 0) {
            yCnt += 10;
        }

        mCnt += (arr[i] / 60) * 15;
        if((arr[i]+1) % 60 != 0) {
            mCnt += 15;
        }
    }

    if(yCnt > mCnt) {
        cout << 'M' << ' ' << to_string(mCnt);
    }else if (yCnt == mCnt) {
        cout << 'Y' << ' ' << 'M' << ' ' << to_string(yCnt);
    }else {
        cout << 'Y' << ' ' << to_string(yCnt);
    }
}