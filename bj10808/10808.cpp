#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main () {
    
    string a;
    cin >> a;

    int alpha[26] = {0};
    for(int i = 0; i < a.length(); i++) {
        alpha[a[i] - 'a']++;
    }
    for(int i = 0; i< 26; i++) {
        cout << alpha[i] << ' ';
    }
}