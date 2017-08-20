#include <iostream>
int GetFibo(int n);

int main() {
	std::cout << GetFibo(7);
	return 0;
}

int GetFibo(int n) {
	if (n == 0) {
		return 0;
	}
	if (n == 1) {
		return 1;
	}
	return GetFibo(n - 1) + GetFibo(n - 2);
}