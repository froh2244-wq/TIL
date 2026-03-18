#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int N = 0;	
	int max = 0;
	double avarage = 0;
	vector<double> v;		

	cin >> N;

	int temp = 0;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		if (temp > max) max = temp;
		v.push_back(temp);
	}


	//평균 계산
	for (int i = 0; i < v.size(); i++) {
		v[i] = v[i] / max * 100;
		avarage += v[i];
	}
	avarage /= v.size();

	std::cout << avarage;

	return 0;
}



