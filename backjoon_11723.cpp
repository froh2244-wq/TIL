#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int M;
	cin >> M;
	vector<bool> S(21, false);
	string command;
	int x;

	for (int i = 0; i < M; i++) {
		cin >> command;
		// S에 x를 추가, 있으면 무시
		if (command == "add") {
			cin >> x;
			S[x] = true;
		}
		//S에서 x를 제거, 없으면 무시
		else if (command == "remove") {
			cin >> x;
			S[x] = false;
		}
		// S에 x가 있으면 1, 없으면 0 출력
		else if (command == "check") {
			cin >> x;
			if (S[x] == true)
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
		// S에 x가 있으면 제거, 없으면 추가
		else if (command == "toggle") {
			cin >> x;
			if (S[x] == true) S[x] = false;
			else S[x] = true;
		}
		// S를 {1,...20}으로 만듬
		else if (command == "all") {
			for (int j = 1; j < S.size(); j++) {
				S[j] = true;
				if (S[j] == true) cout <<j<< "true\n";
				else cout << j <<"false\n";
			}
		}
		// S를 공집합으로 만듬
		else if (command == "empty") {
			for(int j = 1; j < S.size(); j++) {
				S[j] = false;
			}
		}
	}
}
/*
//벡터 안에 원소가 존재하면 인덱스를, 없으면 -1을 리턴
int numIndex(vector<int>& S, int left, int right, int x) {
	int mid = (left + right) / 2;
	if (left > right) return -1;
	if (S[mid] == x)
		return mid;
	else if (S[mid] < x)
		return numIndex(S, mid + 1, right, x);
	else
		return numIndex(S, left, mid - 1, x);
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);

	int M;
	cin >> M;
	vector<int> S;
	string command;
	int x;
	int Index;

	for (int i = 0; i < M; i++) {
		cin >> command;
		// S에 x를 추가, 있으면 무시
		if (command == "add") {
			cin >> x;
			Index = numIndex(S, 0, S.size() - 1, x);
			if (Index == -1) {
				//추가할 때마다 정렬
				S.push_back(x);
				sort(S.begin(), S.end());
			}
		}
		//S에서 x를 제거, 없으면 무시
		else if (command == "remove") {
			cin >> x;
			Index = numIndex(S, 0, S.size() - 1, x);

			if (Index != -1)
				S.erase(S.begin() + Index);
		}
		// S에 x가 있으면 1, 없으면 0 출력
		else if (command == "check") {
			cin >> x;
			Index = numIndex(S, 0, S.size() - 1, x);

			if (Index != -1) cout << "1\n";
			else cout << "0\n";
		}
		// S에 x가 있으면 제거, 없으면 추가
		else if (command == "toggle") {
			cin >> x;
			Index = numIndex(S, 0, S.size() - 1, x);

			if (Index != -1)
				S.erase(S.begin() + Index);
			else {
				//추가할 때마다 정렬
				S.push_back(x);
				sort(S.begin(), S.end());
			}
		}
		// S를 {1,...20}으로 만듬
		else if (command == "all") {
			for (int i = 0; i < S.size(); i++) {
				S[i] = i + 1;
			}
			for (int i = S.size(); i < 20; i++) {
				S.push_back(i + 1);
			}
		}
		// S를 공집합으로 만듬
		else if (command == "empty") {
			S.clear();
		}
	}
}
*/

