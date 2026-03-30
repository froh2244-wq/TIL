#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

//이진 탐색으로 같은 문자열 있을 경우 true 리턴
bool BS(vector<string> &vec, string str) {
	int left = 0, right = vec.size() - 1;
	int mid;
	while(left <= right) {
		mid = (left + right) / 2;
		if (vec[mid] == str) {
			return true;
		}
		else if (vec[mid] > str) {
			right = mid - 1;
		}
		else if (vec[mid] < str) {
			left = mid + 1;
		}
	}
	return false;
}
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);


	int N, M;
	cin >> N >> M;

	vector<string> dm;
	vector<string> dbj;
	string str;

	//듣도 못한 사람 입력
	for (int i = 0; i < N; i++) {
		cin >> str;
		dm.push_back(str);	
	}

	// 이진 탐색을 위한 정렬
	sort(dm.begin(), dm.end());

	// 보도 못한 사람 입력, 바로 비교해서 듣보잡 벡터에 추가
	for (int i = 0; i < M; i++) {
		cin >> str;
		if (BS(dm, str)) dbj.push_back(str);
	}

	//수와 명단 사전순 출력
	sort(dbj.begin(), dbj.end());
	cout << dbj.size() << "\n";
	for (string s : dbj) {
		cout << s << "\n";
	}
	
}


