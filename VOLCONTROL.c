
#include<stdio.h>
int main(){
        int t,x,y;
        scanf("%d",&t);
        while(t--){
         scanf("%d%d",&x,&y);
         printf("%d\n",abs(y-x)); //abs - to convert negative to positive
        }
        return 0;
}
