#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        int a, b, c, d;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        int t=0;
        if(a>b)
        {
        	t=b;
			b=a;
			a=t;
		}
		if(b>c)
		{
			t=c;
			c=b;
			b=t;
		}
		if(c>d)
		{
			t=d;
			d=c;
			c=t;
		}
		if(a>b)
		{
			t=b;
			b=a;
			a=t;	
		}
		if(b>c)
		{
			t=c;
			c=b;
			b=t;	
		}
		if(a>b)
		{
			t=b;
			b=a;
			a=t;	
		}
		printf("%d %d %d %d\n",a,b,c,d);
	}
    return 0;
}
