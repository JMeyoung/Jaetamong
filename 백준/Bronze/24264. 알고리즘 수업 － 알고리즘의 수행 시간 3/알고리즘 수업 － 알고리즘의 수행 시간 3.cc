#include <cstdio>

int main() {
#ifdef _WIN32
	freopen("input.txt", "r", stdin);
#endif
	long long int n;
	scanf("%lld", &n);
	
	printf("%lld\n2\n", n * n);
	return 0;
}