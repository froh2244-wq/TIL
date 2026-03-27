#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
#include<tuple>
using namespace std;

//길이순, 단어순 정렬된 벡터를 가지고 중복 제거
bool costomSort(const tuple<int, string,int> &t1, tuple <int, string,int>& t2) {
	if (get<0>(t1) == get<0>(t2))
		return get<2>(t1) < get<2>(t2);
	else return get<0>(t1) < get<0>(t2);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<tuple<int, string,int>> v;
	int age; string name;
	for (int i = 0; i < N; i++) {
		cin >> age;
		cin >> name;

		v.emplace_back(age, name, i);
	}

	sort(v.begin(), v.end(), costomSort);
	for (int i = 0; i < v.size(); i++) {
		cout << get<0>(v[i]) << " " << get<1>(v[i]) << "\n";
	}
	return 0;
}
