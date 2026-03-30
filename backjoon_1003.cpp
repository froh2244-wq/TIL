#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
#include<tuple>
#include<queue>
using namespace std;
int fibonacci(int n) {
    vector<int> v(n + 1);
    v[0] = 0;
    if(n > 0)
        v[1] = 1;
    if(n > 1)
        for (int i = 2; i < v.size(); i++) {
            v[i] = v[i - 1] + v[i - 2];
        }
    return v[n];
}
int main(){
    int T, N;
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> N;
        if (N == 0)
            cout << 1 << " " << 0 << "\n";
        else cout << fibonacci(N - 1) << " " << fibonacci(N) << "\n";
    }
    // 1. 1이 나오는 횟수는 피보나치 N, 0이 나오는 횟수는 이전 피보나치 N 
	return 0;
}