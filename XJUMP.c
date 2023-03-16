#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	        int x,y;
	        scanf("%d%d",&x,&y);
	        if(x%y==0){
	                printf("%d\n",x/y);
	        }
	        else{
	                printf("%d\n",((x/y)+(x%y)));
	        }
	}
	return 0;
}

