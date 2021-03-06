#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int dp[10001][10];
	for (int i = 0; i <=  9; i++) {
		dp[1][i] = 1;
	}
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= 9; j++) {
			for (int k = 0; k <= j; k++) {
				dp[i][j] += dp[i - 1][k];
				dp[i][j] %= 10007;
			}
		}
	}
	long long answer = 0;
	for (int i = 0; i <= 9; i++) {
		answer += dp[n][i];
		answer %= 10007;
	}
	cout << answer;
	return 0;
}