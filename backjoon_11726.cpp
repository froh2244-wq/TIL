#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
#include<tuple>
#include<queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector<long> vec(n + 1, 0);

	//1212 = 두칸 21 = 한칸
	vec[1] = 1;
	if(n > 1)
		vec[2] = 2;
	for (int i = 3; i <= n; i++) {
		vec[i] = (vec[i - 1] + vec[i - 2]) % 10007;
	}
	cout << vec[n] ;
	return 0;
}