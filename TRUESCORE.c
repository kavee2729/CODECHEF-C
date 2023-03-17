#include <stdio.h>

int main(void) {
	
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c,d;
	    scanf("%d%d%d%d",&a,&b,&c,&d);
	    if(a<=c && b<=d)
	    {
	        printf("possible\n");
	    }
	    else
	    {
	        printf("impossible\n");
	    }
	}
	
	return 0;
}


