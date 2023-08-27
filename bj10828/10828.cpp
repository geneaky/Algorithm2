#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(int argc, char**argv) {

	ios::sync_with_stdio(0);
	cin.tie(0);
		
	stack<int> S;
	int N;
	
	cin >> N;
	
	while(N--){
		string str;
		cin >> str;
		
		if(str=="push"){
			int X;
			cin >> X;
			S.push(X);
		}
		
		else if(str=="pop"){
			if(!S.empty()){
				cout << S.top() << "\n";
				S.pop();
			}
			else
				cout << "-1\n";
		}
		
		else if(str=="size"){
			cout << S.size() << "\n";
		}
		
		else if(str=="empty"){
			cout << S.empty() << "\n";
		}
		
		else if(str=="top"){
			if(!S.empty()){
				cout << S.top() << "\n";	
			}
			else
				cout << "-1\n";
		}
		
	}
	
	return 0;
}