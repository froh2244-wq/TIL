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

	int N, M;
	cin >> N >> M;
	//1번째 수부터 인덱스번째 수까지의 합을 저장
	vector<int> vec(N + 1, 0);

	int num;
	for (int i = 1; i <= N; i++) {
		cin >> num;
		vec[i] = num + vec[i-1];
	}
	//구간 ij는 vec[j] - vec[i-1]
	int fir, sec;
	for (int i = 0; i < M; i++) {
		cin >> fir >> sec;
		cout << vec[sec] - vec[fir - 1] << "\n";
	}


	return 0;
}
