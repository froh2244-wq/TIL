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
	vector <int> v;

	int temp;
	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());
	for (int x : v) {
		cout << x << "\n";
	}

	
	
	return 0;
}