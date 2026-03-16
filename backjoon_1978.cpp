#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

// 소수인지 판단하는 함수
bool isPrime(int n) {
	//n이 1이라면 false 리턴
	if (n == 1)	return false;
	//2에서 1씩 늘려가며 나누고, 나머지가 0이라면 false 리턴
	for (int div = 2; div < n; div++) {
		if (n % div == 0) return false;
	}
	return true;
}
int main() {
	// 수의 개수
	int N = 0;
	// 소수의 개수
	int nPrime = 0;
	// 숫자를 저장할 변수
	int num = 0;
	cin >> N;
	// N의 크기만큼 반복하며 num에 숫자를 저장하고, 소수라면 nPrime에 1을 더함
	for (int i = 0; i < N; i++) {
		cin >> num;
		if (isPrime(num)) 
			nPrime +=1;
	}
	cout << nPrime;

	return 0;
}
