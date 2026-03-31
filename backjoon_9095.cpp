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

	int T, n;
	cin >> T;
	vector<int> v(11, 0);

	for (int i = 0; i < T; i++) {
		cin >> n;
		//1. 초기값 n = 1, n = 2, n = 3
		v[1] = 1;
		if (n > 1) 
			v[2] = 2;
		if (n > 2)
			v[3] = 4;
		//2. v[n]의 조합은 = v[n - 1] 조합에서 1을 추가, v[n - 2] 조합에서 2추가, v[n - 3] 조합에서 3추가
		for (int i = 4; i <= n; i++) {
			v[i] = v[i - 1] + v[i - 2] + v[i - 3];
		}
		
		cout << v[n] << "\n";
	}

	
	return 0;
}


