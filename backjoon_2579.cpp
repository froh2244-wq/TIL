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
	vector<int> stairs(N + 1, 0);
	//최댓값 저장
	vector<int> score(N + 1, 0);
	 
	int temp;
	for (int i = 1; i <= N; i++) {
		cin >> temp;
		stairs[i] = temp;
	}

	// 1. 초기조건 1~3
	score[1] = stairs[1];
	score[2] = stairs[1] + stairs[2];
	score[3] = max(stairs[2] + stairs[3], stairs[1] + stairs[3]);
	for (int i = 4; i <= N; i++) {
		//1. 2계단 1계단
		if(score[i] < score[i - 3] + stairs[i - 1] + stairs[i])
			score[i]  = score[i - 3]  +stairs[i - 1] + stairs[i];
		//2. 2계단
		if(score[i] < score[i - 2] + stairs[i])
			score[i] = score[i - 2] + stairs[i];
		
	}
	
	cout << score[N];

	return 0;
}


