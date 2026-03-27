#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
#include<tuple>
#include<queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	queue<int> q;
	stack<int> tempStk;
	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	int temp;
	while (!q.empty()) {
		if (q.size() == 1) {
			cout << q.front();
			break;
		}
		else {
			q.pop();
			temp = q.front();
			q.push(temp);
			q.pop();
		}
	}
	return 0;
}
