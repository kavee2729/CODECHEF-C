#include <stdio.h>

int main(void) {
        int t;
        scanf("%d",&t);
        while(t--){
                int x,y,z;
                scanf("%d%d%d",&x,&y,&z);
                if(x%3==0){
                        
                        printf("%d\n",x*y+((x/3)-1)*z);
                }
                else{
                        printf("%d\n",x*y+(x/3)*z);
                }
        }
	return 0;
}

