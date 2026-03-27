#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

//길이순, 단어순 정렬된 벡터를 가지고 중복 제거
void delDup(vector<string>& v){
	int count;
	vector<string> temp;

	for (int i = 0; i < v.size(); i++) {
		count = -1;

		for (int j = i; j < v.size(); j++){
			// 비교할 string 길이가 더 커지면 break
			if (v[i].length() < v[j].length()) break;
			// 1. 같으면 count 증가
			if (v[i] == v[j]) count++;
			else;
		}
		// 2. 벡터에 추가하고 카운터만큼 인덱스 증가
		temp.push_back(v[i]);
		i += count;
	}

	v = temp;
}
bool costomSort(const string& str1, const string& str2) {
	if (str1.length() == str2.length()) {
		return str1 < str2;
	}
	else return str1.length() < str2.length();
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	string str;
	vector<string> v;
	for (int i = 0; i < N; i++) {
		cin >> str;
		v.push_back(str);
	}

	sort(v.begin(), v.end(),costomSort);
	delDup(v);

	for (string s : v) {
		cout << s << "\n";
	}
	return 0;
}
