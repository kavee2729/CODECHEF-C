#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	        int x,y,a;
	        scanf("%d%d",&x,&y);
	        a=21-(x+y);
	        if(a<=10){
	                printf("%d\n",a);
	        }
	        else{
	                printf("%d\n",-1);
	        }
	        
	}
	return 0;
}

