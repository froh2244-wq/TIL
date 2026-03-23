#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;


//최대공약수 리턴
int getGcd(int n1, int n2) {
	int gcd = 0;
	for (int i = 1; i <= min(n1, n2); i++) {
		if ((n1 % i) == 0 && (n2 % i) == 0) {
			gcd = i;
		}
	}
	return gcd;
}
//최소공배수 리턴
int getLcm(int n1, int n2) {
	int lcm = 0;
	int temp1 = 0;
	int temp2 = 0;

	//최소공배수 = n1 * n2 / 최대공약수
	lcm = n1 * n2 / getGcd(n1, n2);

	//이전 코드
	/*for (int i = 1; i <= n2; i++) {
		temp1 = n1 * i;
		for (int j = 1; j <= n1; j++) {
			temp2 = n2 * j;
			if (temp1 == temp2) {
				lcm = temp1;
				break;
			}
		}
	}
	for (int i = 1; i <= n1; i++) {
		temp1 = n2 * i;
		for (int j = 1; j <= n2; j++) {
			temp2 = n1 * j;
			if (temp1 == temp2 && temp1 < lcm) {
				lcm = temp1;
				break;
			}
		}
	}*/
	return lcm;
	
}

int main() {
	int num1 = 0;
	int num2 = 0;

	cin >> num1 >> num2;

	cout << getGcd(num1, num2) << "\n";
	cout << getLcm(num1, num2) << "\n";
	return 0;
}



