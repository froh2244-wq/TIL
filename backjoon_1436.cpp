#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	int min = 666;
	
	string str;
	int count , maxCont ;
	// 1. i는 666부터 1씩 커지며 6이 세 번 이상 연속되면 리턴
	for (int i = min; i < 100000000; i++) {
		// 2. i를 string 객체에 담아 6이 몇 번 연속되는지 셈
		count = 0;
		maxCont = 0;
		str = to_string(i);
		for (char c : str) {
			if (c == '6' ) {
				count ++;
				maxCont = max(maxCont, count);
			}
			else count = 0;

		}
		// 3. 연속 3번 이상이면 N을 하나씩 낮추고, N이 0이라면 출력 후 break.
		if (maxCont >= 3 && N > 0) {
			N--;
			if (N == 0) {
				cout << i << "\n";
				break;
			}
		}				
		else;
	}
	return 0;
}
