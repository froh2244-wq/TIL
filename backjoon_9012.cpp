#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;

		stack<char> stk;
		bool isValid = true;

		for (char c : str) {
			if (c == '(')	\
				stk.push(c);
			else if (c == ')')
				if (!stk.empty())
					stk.pop();
				else {
					isValid = false;
					break;
				}
		}
		if (isValid && stk.empty()) {
			cout << "YES\n";
		}
		else cout << "NO\n";
	}

	return 0;
}
