/*
This shit is cringe.
            -Monasm
*/  
#include <stdio.h>

struct top{
	int x1;
	int y1;
	int x2;
	int y2;
	int ch1;
	int ch2;
};

int main(){
	int n;
	scanf("%d",&n);
	struct top t[n];
	int a[n];
	int len = 0;
	int max=0;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		len+=((a[i]-1)*2)+1;
		max=max<((a[i]-1)*2)+1?((a[i]-1)*2)+1:max;
	}
	int mid = (max/2)+1;
	for(int i=0;i<n;i++){
		int dis = 0;
		for(int j=0;j<i;j++){
			dis+=((a[j]-1)*2)+1;
		}
		t[i].x1 = (dis+a[i]);
		t[i].y1 = mid-a[i]+1;
		t[i].x2 = (dis+a[i]);
		t[i].y2 = mid-a[i]+1;
		t[i].ch1 = 65;
		for(int j=1;j<=t[i].x1-1;j++){
		    if(t[i].ch1 == 90){
		        t[i].ch1=64;
		    }
		    t[i].ch1++;
		}
		t[i].ch2 = t[i].ch1;
	}
	for(int i=1;i<=max;i++){
	    if(i<mid){
            for(int j=1;j<=len;j++){
    			int con = 0;
    			for(int k=0;k<n;k++){
    				if((t[k].x1==j && t[k].y1==i)||(t[k].x2==j && t[k].y2==i)){
    					con = 1;
    					if((t[k].x1==j && t[k].y1==i)&&(t[k].x2==j && t[k].y2==i)){
    						printf("%c",t[k].ch1);
    						t[k].x1--;
    						t[k].y1++;
    						t[k].ch1--;
    						t[k].x2++;
    						t[k].y2++;
    						t[k].ch2++;
    					}
    					else if((t[k].x1==j && t[k].y1==i)){
    						printf("%c",t[k].ch1);
    						int ref = t[k].x2-t[k].x1-1;
    						j+= ref+1;
    						for(int r=1;r<=ref;r++){
    						    printf("@");
    						}
    						printf("%c",t[k].ch2);
    						t[k].x2++;
    						t[k].y2++;
    						t[k].ch2++;
    						t[k].x1--;
    						t[k].y1++;
    						t[k].ch1--;
    					}
    					if(t[k].ch1 == 64){
    					    t[k].ch1 = 90;
    					}
    					else if(t[k].ch1 == 91){
    					    t[k].ch1 = 65;
    					}
    					if(t[k].ch2 == 91){
    					    t[k].ch2 = 65;
    					}
    					else if(t[k].ch2 == 64){
    					    t[k].ch2 = 90;
    					}
    				}
    			}
    			if (con==0){
    				printf(".");
    			}
    		}
	    }
		else if(i==mid){
		    for(int j=1;j<=len;j++){
		        for(int k=0;k<n;k++){
		            if((t[k].x1==j && t[k].y1==i)&&(t[k].x2==j && t[k].y2==i)){
		                printf("%c",t[k].ch1);
		                t[k].x2=0;
    					t[k].y2=0;
    					t[k].x1=0;
    					t[k].y1=0;
		            }
		            else if((t[k].x1==j && t[k].y1==i)){
    					printf("%c",t[k].ch1);
    					int ref = t[k].x2-t[k].x1-1;
    					j+= ref+1;
    					for(int r=1;r<=ref;r++){
    					    printf("@");
    					}
						printf("%c",t[k].ch2);
    					t[k].x2--;
    					t[k].y2++;
    					t[k].ch2--;
    					t[k].x1++;
    					t[k].y1++;
    					t[k].ch1++;
					}
					if(t[k].ch1 == 64){
    				t[k].ch1 = 90;
    				}
    				else if(t[k].ch1 == 91){
    				    t[k].ch1 = 65;
    				}
					if(t[k].ch2 == 91){
    				    t[k].ch2 = 65;
    				}
    				else if(t[k].ch2 == 64){
					    t[k].ch2 = 90;
    				}
		        }
		    }
		}
		if(i>mid){
            for(int j=1;j<=len;j++){
    			int con = 0;
    			for(int k=0;k<n;k++){
    				if((t[k].x1==j && t[k].y1==i)||(t[k].x2==j && t[k].y2==i)){
    					con = 1;
    					if((t[k].x1==j && t[k].y1==i)&&(t[k].x2==j && t[k].y2==i)){
    						printf("%c",t[k].ch1);
    						t[k].x1 = 0;
    						t[k].y1 = 0;
    						t[k].x2 = 0;
    						t[k].y2 = 0;
    					}
    					else if((t[k].x1==j && t[k].y1==i)){
    						printf("%c",t[k].ch1);
    						int ref = t[k].x2-t[k].x1-1;
    						j+= ref+1;
    						for(int r=1;r<=ref;r++){
    						    printf("@");
    						}
    						printf("%c",t[k].ch2);
    						t[k].x2--;
    					    t[k].y2++;
    			    		t[k].ch2--;
    				    	t[k].x1++;
    	    				t[k].y1++;
    		    			t[k].ch1++;
    					}
    					if(t[k].ch1 == 64){
    					    t[k].ch1 = 90;
    					}
    					else if(t[k].ch1 == 91){
    					    t[k].ch1 = 65;
    					}
    					if(t[k].ch2 == 91){
    					    t[k].ch2 = 65;
    					}
    					else if(t[k].ch2 == 64){
    					    t[k].ch2 = 90;
    					}
    				}
    			}
    			if (con==0){
    				printf(".");
    			}
    		}
	    }
		printf("\n");
	}
	return 0;
}
