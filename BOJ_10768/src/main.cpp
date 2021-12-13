#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int m, d;
	cin >> m >> d;

	if (m < 2) {
		cout << "Before";
	}
	else if (2 < m) {
		cout << "After";
	}
	else {
		if (d < 18) {
			cout << "Before";
		}
		else if (18 < d) {
			cout << "After";
		}
		else {
			cout << "Special";
		}
	}

	return 0;
}