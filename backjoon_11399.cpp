#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int N;
	cin >> N;
	int time;
	//벡터에 시간 입력 후 정렬
	vector<int> vec;
	for (int i = 0; i < N; i++) {
		cin >> time;
		vec.push_back(time);
	}
	sort(vec.begin(), vec.end());
	// 이전 더해진 수에 새로운 시간 더하고, 더할 때마다 결과에 값 더하기
	int min = 0;
	int result = 0;
	for (int t : vec) {
		min = min + t;
		result += min;
	}
	cout << result;
}


