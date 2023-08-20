#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;
static vector<int> arr;
static vector<int> re_arr;

static bool visit[100];
static int cnt;

void backtrack(int score, int cnt) {
    if(score == 100 and cnt == 7) {
        sort(re_arr.begin(), re_arr.end());

        for(int i = 0; i < 7; i++) {
            cout << re_arr[i] << endl;
        }

        exit(0);
    }

    if(cnt > 7 or score > 100) {
        return;
    }

    for(int i = 0; i < 9; i++) {
        if(visit[arr[i]] == false) {
            visit[arr[i]] = true;
            re_arr.push_back(arr[i]);
            backtrack(score + arr[i], cnt + 1);
            visit[arr[i]] = false;
            re_arr.pop_back();
        }
    }

    return;
}

int main() {
    freopen("input.txt", "r", stdin);

    memset(visit, false, sizeof(visit));
    for(int i = 0; i < 9; i++) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    backtrack(0,0);
    
    return 0;
}