#include <bits/stdc++.h>
using namespace std;

void perform_test() {
	int n, m;
	cin >> n >> m;
	// if m is not divisible by n, then the answer is -1
	// otherwise, get the quotient of m and n (required number of times to multiply n)
	// the quotient should be a product of zero or more 2s and and of zero or more 3s
	// to find the the number of times to use 2 and 3, keep dividing m until it is divisible (separately)
	// the expected value of d is 1 (if it's not, then print -1)
	if(m % n != 0) {
		cout << "-1\n";
		return;
	}
	int ans = 0;
	int d = m / n;
	while(d % 2 == 0) {
		d /= 2;
		ans++;
	}
	while(d % 3 == 0) {
		d /= 3;
		ans++;
	}
	if(d != 1) {
		ans = -1;
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc = 1;
	//cin >> tc;
	for(int t = 0; t < tc; t++) {
		perform_test();
	}
	return 0;
}

