#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
#include<tuple>
#include<queue>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
	int N;
	cin >> N;

	//최소횟수 저장
	vector<int> v(N + 1, 0);
	for (int i = 2; i < N + 1; i++) {
		// 1. 1을 빼보기
		v[i] = v[i - 1] + 1;
		// 2. 2로 나눌 수 있으면 나누고 1의 결과와 비교
		if (i % 2 == 0) {
			v[i] = min(v[i / 2] + 1, v[i]);
		}
		if (i % 3 == 0) {
			v[i] = min(v[i / 3] + 1, v[i]);
		}
	}
	cout << v[N];
	retrun 0;
}