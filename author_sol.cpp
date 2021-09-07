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
		// insert all elements in a set (unique elements)
		// Lets keep a track on the current maximum of the array. If we add maximum 
		// to any element already present in the array, it will give us a new maximum 
		// as well as new element that was not present in the array before.
		// Main problem here reduces to finding total number of unique elements 
		// present in the array. This task can be solved using sorting and linear 
		// traversal of the array.
		set<int> s;
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;
			s.insert(a);
		}
		// calculate the duplicate elements
		cout << n - (int) s.size() << '\n';
	}
	return 0;
}
