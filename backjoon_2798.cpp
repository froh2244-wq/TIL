#include<iostream>
#include<string>
#include<vector>

using namespace std;

//벡터와 한계숫자를 받아 블랙잭을 수행하는 함수
int blackJack(vector<int> v, int M) {
	//리턴할 값, 임시 변수
	int num = 0;
	int sum = 0;
	//세 가지 조합으로 
	for (int i = 0; i < v.size(); i++) {
		for (int j = i + 1; j < v.size(); j++) {
			for (int k = j + 1; k < v.size(); k++) {
				sum = v[i] + v[j] + v[k];
				if (sum > num && sum <= M)
					num = sum;
			}
		}
	}
	return num;
}
int main() {
	//카드의 개수 N, 한계 숫자 M
	int N = 0, M = 0;
	//숫자를 저장하는 벡터
	vector<int> vec;
	//임시 변수
	int temp = 0;

	//N과 vec에 숫자 저장	
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		vec.push_back(temp);
	}
	cout << blackJack(vec, M);
}