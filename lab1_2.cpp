#include <iostream>
#include <vector>
#include <iterator>

void rotate(int k, int n, std::vector <int> &v) {
	for (int i = 0; i < k; ++i) {
		int tmp = v[n - 1];
		for (int j = n - 1; j > 0; --j)
			v[j] = v[j - 1];
		v[0] = tmp;
	}
}

int main() {
	int n, k;
	std::cin >> k >> n;
	std::vector <int> v;
	for (int i = 0; i < n; i++){
		int x;
		std::cin >> x;
		v.push_back(x);
	}
	for (auto i = v.begin(); i < v.end(); i++)
		std::cout << *i << " ";
	std::cout << "\n";
	rotate(k, n, v);
	for (auto i = v.begin(); i < v.end(); i++)
		std::cout << *i << " ";
	std::cout << "\n";
	return 0;
}