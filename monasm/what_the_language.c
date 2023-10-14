#include <stdio.h>

int main(){
	char a[1000],b[1000];
	char *pA;
	gets(a);
	int len=0;
	for(pA=a;*pA!='\0';pA++){
		len++;
	}
	int count=0;
	for(int i=len-1;i>=0;i--){
		b[count] = a[i];
		count++;
	}
	for(int i=0;i<len;i++){
		for(int j=1;j<=len;j++){
			if(b[i]==90){
				b[i] = 64;
			}
			else if(b[i]==122){
				b[i] = 96;
			}
			else if(b[i] == ' '){
			    break;
			}
			b[i]++;
		}
	}
	printf("%s",b);
}
