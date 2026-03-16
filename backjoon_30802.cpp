#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	//참가자 수
	int N = 1;
	// 사이즈별 수가 들어가는 벡터
	vector<int> size(6);
	// 티셔츠와 펜 한 묶음 수
	int T, P = 2;
	// 티셔츠와 펜 묶음 최소 수, 펜 추가 주문 수
	int numT = 0, numP1 = 0, numP2 = 0;
	cin >> N;
	for (int i = 0; i < size.size(); i++) {
		cin >> size[i];
	}
	cin >> T >> P;
	//numT 구하기
	for (int i = 0; i < size.size(); i++) {
		if (size[i] != 0) {
			numT += size[i] / T;
			if (size[i] % T != 0) numT += 1;
		}
	}
	//numP1, numP2 구하기
	for (int i = 0; i < size.size(); i++) {
		numP1 = N / P;
		numP2 = N % P;
	}
	//출력
	cout << numT << "\n";
	cout << numP1 << " " << numP2;
	return 0;
}
