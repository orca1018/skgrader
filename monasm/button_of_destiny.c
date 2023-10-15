#include <stdio.h>

int main(){
	char a[1000000],b[1000000];
	scanf("%s",a);
	char *pA;
	int len = 0;
	for(pA=a;*pA!='\0';pA++){
		len++;
	}
	int count = 0;
	for(int i=len-1;i>=0;i--){
		b[count] = a[i];
		count++;
	}
	for(int i=0;i<len;i++){
		if(a[i]!=b[i]){
			printf("NO");
			return 0;
		}
	}
	printf("YES");
	return 0;
}
