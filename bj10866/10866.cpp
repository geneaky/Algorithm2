#include<iostream>
#include<deque>
#include<algorithm>
#include<string>

using namespace std;

int main() {
    freopen("input.txt", "r", stdin);

    int count;
    cin >> count;

    deque<int> dq;

    for(int i = 0; i < count; i++) {
        string command;
        cin >> command;

        if(command == "push_front") {
            int temp;
            cin >> temp;
            dq.push_front(temp);
        }else if (command == "push_back") {
            int temp;
            cin >> temp;
            dq.push_back(temp);
        }else if (command =="pop_front"){
            if(dq.empty()) {
                cout << "-1" << '\n';
            }else{
                cout << dq.front() << '\n';
                dq.pop_front();
            }

        }else if(command == "pop_back") {
            if(dq.empty()) {
                cout << "-1" << '\n';
            }else {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
        }else if(command == "size") {
            cout << dq.size() << '\n';
        }else if(command == "empty") {
            if(dq.empty()) {
                cout << "1" << '\n';
            }else{
                cout << "0" << '\n';
            }
        }else if(command == "front") {
            if(dq.empty()) {
                cout << "-1" << '\n';
            }else{
                cout << dq.front() << '\n';
            }
        }else if(command == "back") {
            if(dq.empty()) {
                cout << "-1" << '\n';
            }else {
                cout << dq.back() << '\n';
            }
        }
    }
}