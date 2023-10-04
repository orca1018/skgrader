#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void SieveOfEratosthenes(int n)
{
	bool prime[n + 1];
	memset(prime, true, sizeof(prime));

	for (int p = 2; p * p <= n; p++) {
		if (prime[p] == true) {
			for (int i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}

	int count = 0;
	for (int p = 2; p <= n; p++)
		if (prime[p]) {
		    count++;
		}

	printf("%d", count);
}

// Driver Code
int main()
{
	int n;
	scanf("%d", &n);
	SieveOfEratosthenes(n);
	return 0;
}