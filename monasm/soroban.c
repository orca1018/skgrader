#include <stdio.h>

int main(){
	int num;
	scanf("%d",&num);
	int digit=0;
	int save_num = num;
	if(num==0){
	    printf("O-|-OOOO");
	    return 0;
	}
	while(save_num>0){
	    save_num/=10;
	    digit++;
	}
	while(num>0){
	    int l=num%10;
	    num/=10;
		if(l<5){
			printf("O-");
		}
		else if(l>=5){
			printf("-O");
			l-=5;
		}
		printf("|");
		if(l==0){
			printf("-OOOO");
		}
		else if(l==1){
			printf("O-OOO");
		}
		else if(l==2){
			printf("OO-OO");
		}
		else if(l==3){
			printf("OOO-O");
		}
		else if(l==4){
			printf("OOOO-");
		}
		printf("\n");
	}
}
