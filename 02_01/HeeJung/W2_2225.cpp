#include<iostream>
using namespace std;

int main() {
	int n, k;

	cin >> n >> k;

	long long arr[201][201];
	
	for (int i = 1; i <= n; i++) {
		arr[i][1] = 1;
	}
	for (int i = 1; i <= k; i++) {
		arr[1][i] = i;
	}
	for (int i = 2; i <= n; i++) {
		for (int j = 2; j <= k; j++) {
			arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
			arr[i][j] %= 1000000000;
		}
		
	}
	cout << arr[n][k]%1000000000 << endl;


}