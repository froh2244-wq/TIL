#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
#include<tuple>
#include<queue>
using namespace std;

queue<pair<int, int>> q;
vector<vector<int>> maze;
vector<vector<int>> score;
pair<int, int> p;
int N, M;
int cnt;
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };

void dfs() {
	int cx, cy;
	int nx, ny;
	// 1. 시작 좌표를 0, 0으로 설정, 방문하기
	p.first = 0;
	p.second = 0;
	q.push(p);
	score[p.first][p.second] = 1;
	maze[p.first][p.second] = 0;
	// 2. q가 빌 때까지 반복
	while (!q.empty()) {
		// 3. q에서 pop
		cx = q.front().first;
		cy = q.front().second;
		q.pop();
		// 4. 상하좌우 갈 수 있는 지 탐색
		for (int i = 0; i < 4; i++) {
			nx = cx + dx[i];
			ny = cy + dy[i];
			// 5. 갈 수 있다면, q에 집어넣고 도장 찍기
			if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
				if (maze[nx][ny] == 1) {
					p.first = nx;
					p.second = ny;
					q.push(p);
					score[nx][ny] = score[cx][cy] + 1;
					maze[nx][ny] = 0;
				}
			}
		}
		/*
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				cout << score[i][j];
			}
			cout << "\n";
		}
		*/
	}

}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
	cin >> N >> M;
	maze.assign(N, vector<int>(M, 0));
	
	//미로 완성, 점수판 초기화
	string str;
	for (int i = 0; i < N; i++) {
		cin >> str;
		for (int j = 0; j < M; j++) {
			maze[i][j] = str[j] - '0';
		}
	}
	score.assign(N, vector<int>(M, 0));

	//시작 좌표 큐에 넣고 dfs
	p.first = 0;
	p.second = 0;
	q.push(p);
	dfs();

	cout << score[N-1][M-1];
	return 0;
}