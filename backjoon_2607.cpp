#include<iostream>
#include<vector>
#include<string>

using namespace std;

vector<vector<int>> connect;
vector<bool> visited;
int worm = 0;

void DFS(int node) {
	//1. 방문했다면 리턴
	if (visited[node] == true) return;
	//2. worm 추가, 방문에 추가, 탐색
	visited[node] = true;
	worm++;
	for (int nextnode : connect[node]) {
		DFS(nextnode);
	}
}
int main() {
	int com = 0, k = 0;
	cin >> com >> k;

	// 1. 2차원 벡터로 그래프 생성
	connect.resize (com + 1);
	visited.resize(com + 1);
	int fir, sec;
	for (int i = 0; i < k; i++) {
		cin >> fir >> sec;
		connect[fir].push_back(sec);
		connect[sec].push_back(fir);
	}

	DFS(1);
	//1번 컴퓨터는 제외
	cout << worm - 1;
	return 0;
}