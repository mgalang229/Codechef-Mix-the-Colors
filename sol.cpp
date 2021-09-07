#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		// count the number of duplicate elements
		sort(a.begin(), a.end());
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] == a[i + 1]) {
				cnt++;
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}
