#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
#include<tuple>
#include<queue>
using namespace std;

vector<vector<int>> grim1;
vector<int> grim2(1, 0);
int cnt;
int N;
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };


void dfs(int x, int y) {
	if (grim1[x][y] == 0) return;
	cnt++;
	grim1[x][y] = 0;

	int nx, ny;
	for (int i = 0; i < 4; i++) {
		nx = x + dx[i];
		ny = y + dy[i];
		if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
			dfs(nx, ny);
		}
	}
	
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    

	cin >> N;
	grim1.assign(N, vector<int>(N, 0));
	int x, y;

	string str;
	for (int i = 0; i < N; i++) {
		cin >> str;
		for (int j = 0; j < N; j++) {
			grim1[i][j] = str[j] - '0';
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (grim1[i][j] == 1) {
				cnt = 0;
				dfs(i, j);
				grim2.push_back(cnt);
			}
		}
	}

	sort(grim2.begin(), grim2.end());
	cout << grim2.size() - 1 << "\n";
	for (int i = 1; i < grim2.size(); i++) {
		cout << grim2[i] << "\n";
	}
	return 0;
}