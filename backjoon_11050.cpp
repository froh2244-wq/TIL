#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	float N, K, result= 1;
	cin >> N >> K;
	
	if (N - K > K) K = N - K;

	for (int i = N; i > K; i--) {
		result *= i;
	}
	for (int i = N - K; i > 0; i--) {
		result /= i;
	}

	cout << result;
	return 0;
}
