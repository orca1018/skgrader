#include<stdio.h>

int main() 
{
	int d, n, a[1001];
	int i, j, k;
	int ans[2001];
	
	scanf("%d", &d);
	for (i=1; i<=d; i++) {
		ans[i] = 0;
		scanf("%d", &n);
		for (j=1; j<=n; j++) {
			scanf("%d", &a[j]);
			ans[i] += a[j];
		}
	}
	
	for (k=1; k<=i-1; k++) {
		printf("%d\n", ans[k]);
	}
	
	return 0;
}