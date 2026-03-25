#include<iostream>
#include<string>
#include<vector>
#include<tuple>
#include<algorithm>
#include<stack>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	stack<int> s;

	string command;
	int num;
	for (int i = 0; i < N; i++) {
		cin >> command;
		if (command == "push") {
			cin >> num;
			s.push(num);
		}
		if (command == "pop") {
			if (!s.empty()) {
				cout << s.top() << "\n";
				s.pop();
			}
			else cout << -1 << "\n";
		}
		if (command == "size") {
			cout << s.size() << "\n";
		}
		if (command == "empty") {
			cout << s.empty() << "\n";
		}
		if (command == "top") {
			if (!s.empty()) {
				cout << s.top() << "\n";
			}
			else cout << -1 << "\n";
		}
	}
	
	
	return 0;
}