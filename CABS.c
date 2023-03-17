#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	        int x, y;
	        scanf("%d%d",&x,&y);
	        if(x<y){
	                printf("first\n");
	        }
	        else if(x>y){
	                printf("second\n");
	        }
	        else {
	                printf("any\n");
	        }
	}
	return 0;
}

