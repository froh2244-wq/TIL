#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int i , left, right;
	string str;
	while (true) {
		cin >> i;
		if (i == 0) break;

		str = to_string(i);
		left = 0; right = str.length() - 1;

		for (int i = 0; i < str.length() / 2; i++) {
			if (str[left] == str[right]) {
				left++;
				right--;
			}
			else {
				cout << "no\n";
				break;
			}
		}
		if (left >= right)
			cout << "yes\n";
	}
	return 0;
}
