#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

//세 수를 정렬한 벡터를 출력
vector<int> sortVec(int i, int j, int k) {
	vector<int> v;
	v.push_back(i);
	v.push_back(j);
	v.push_back(k);

	sort(v.begin(), v.end());
	return v;
}


//직각삼각형인지 판단
bool isRight(int i, int j, int k) {
	vector<int> vec = sortVec(i,j,k);
	return vec[2]*vec[2] == vec[1] * vec[1] + vec[0] * vec[0];
}

int main() {
	bool isTrue = true;
	int i, j, k = 0;
	while (isTrue) {
		cin >> i >> j >> k;
		if (i == 0 && j == 0 && k == 0) {
			break;
		}
		if (isRight(i,j,k)) {
			cout << "right\n";
		}
		else cout << "wrong\n";
	}
	return 0;
}
