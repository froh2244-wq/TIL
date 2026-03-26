#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

void BS(vector<int>& vec, int left, int right, int n) {

	int mid = (left + right) / 2;
	if (left > right) {
		cout << 0 << "\n";
		return;
	}
	else if (vec[mid] == n) {
		cout << 1 << "\n";
		return;
	}
	else if (vec[mid] < n) {
		BS(vec, mid + 1, right, n);
	}
	else if (vec[mid] > n)
		BS(vec, left, mid - 1, n);
	else;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N ,M;
	cin >> N;

	vector<int> vec;
	int temp;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		vec.push_back(temp);
	}

	sort(vec.begin(), vec.end());

	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> temp;
		BS(vec, 0, N - 1, temp);
	}

	return 0;
}
