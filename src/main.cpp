#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

using vi = vector<int>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto a = vi(5);
	auto sum = int{ 0 };
	for (auto i = 0; i < 5; ++i) {
		cin >> a[i];
		sum += a[i];
	}

	cout << sum / 5 << '\n';

	sort(a.begin(), a.end());
	cout << a[2] << '\n';

	return 0;
}