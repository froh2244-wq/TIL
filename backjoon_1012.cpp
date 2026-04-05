#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
#include<tuple>
#include<queue>
using namespace std;

vector<vector<bool>> bachu;

int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

void dfs(int x, int y) {
	bachu[x][y] = false;
	int nx, ny;
	for (int i = 0; i < 4; i++) {
		nx = x + dx[i];
		ny = y + dy[i];

		if (nx >= 0 && nx < bachu.size() && ny >= 0 && ny < bachu[x].size()) {
			if (bachu[nx][ny] == true) {
				dfs(nx, ny);
			}
		}
	}	
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
	int T;
	cin >> T;
	int M, N, K;
	int x, y;
	int count;

	for (int i = 0; i < T; i++) {
		cin >> M >> N >> K;
		count = 0;
		//배추밭 초기화
		bachu.resize(M);
		for (int j = 0; j < M; j++) {
			bachu[j].resize(N, false);
		}
		//배추 심어진 위치 입력
		for (int j = 0; j < K; j++) {
			cin >> x >> y;
			bachu[x][y] = true;
		}
		for (int j = 0; j < bachu.size(); j++) {
			for (int k = 0; k < bachu[j].size(); k++) {
				if (bachu[j][k] == true) {
					count++;
					dfs(j, k);
				}
			}
		}
		cout << count << "\n";
	}
	return 0;
}