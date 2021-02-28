#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int s;
		cin >> s;
		vector<int> q(s);
		// store the intro song durations for each season in an array
		for (int i = 0; i < s; i++) {
			cin >> q[i];
		}
		// create a 'cnt' variable to count the occurrences of the episodes
		int cnt = 0;
		// create a 'sum' variable to calculate the total duration watched
		long long sum = 0;
		// create an 'e' variable to take the input of the episodes
		int e = 0;
		for (int i = 0; i < s;) {
			if (cnt == 0) {
				// if 'cnt' is equal to 0, then take the input in 'e' variable
				cin >> e;
			}
			// take the input in 'l' variable for 'e' times
			int l;
			cin >> l;
			if (cnt == 0) {
				// if 'cnt' is equal to 0, then don't remove the intro song duration
				sum += l;
			} else {
				// otherwise, subtract the intro song duration from the total episode duration
				sum += (l - q[i]);
			}
			// increment 'cnt' for every 'l' episode
			cnt++;
			if (cnt == e) {
				// check if the i-th season has reached 'e' episodes 
				// reset the counter
				cnt = 0;
				// and the increase 'i' to calculate the next season
				i++;
			}
		}
		cout << sum << '\n';
	}
	return 0;
}
