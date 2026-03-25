#include<iostream>
#include<string>
#include<vector>
#include<tuple>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N = 0;
	cin >> N;
	vector <pair<int, int>> v;


	int temp1, temp2;
	for (int i = 0; i < N; i++) {
		cin >> temp1 >> temp2;
		v.emplace_back(temp1, temp2);
	}

	sort(v.begin(), v.end());

	for (auto [x, y] : v) {
		cout << x << " " << y << "\n";
	}
	
	return 0;
}