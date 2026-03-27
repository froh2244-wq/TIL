#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N = 0;
	cin >> N;

	int stk[10000];
	int front = 0;
	int back = 0;

	string str;
	int temp;
	for (int i = 0; i < N; i++) {
		cin >> str;
		if (str == "push") {
			cin >> temp;
			stk[back++] = temp;
		}
		else if (str == "pop") {
			if (front != back)
				cout << stk[front++] << "\n";
			else cout << -1 << "\n";
		}
		else if (str == "size")
			cout << back - front << "\n";
		else if (str == "empty") {
			if (front == back)
				cout << 1 << "\n";
			else cout << 0 << "\n";
		}
		else if (str == "front") {
			if (front != back)
				cout << stk[front] << "\n";
			else cout << -1 << "\n";
		}
		else if (str == "back") {
			if (front != back)
				cout << stk[back-1] << "\n";
			else cout << -1 << "\n";
		}
	}

	return 0;
}
