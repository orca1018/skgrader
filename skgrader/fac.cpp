#include<stdio.h>
#include<assert.h>

int main()
{
	int n, i, ans = 1;
	
	scanf("%d", &n);
	assert(n>=0);
	assert(n<=10);
	for(i=n; i>=1; i--) {
		ans = ans*i;
	}
	printf("%d", ans);
	
	return 0;
}