#include<stdio.h> 
int main()
{
    int i,j;
    int sum,fact,lastfact;
    int modnum = 1000000;
     int k=0;
	 scanf("%d",&k);
	 int a[k];
	  for(int m=0;m<k;m++)
	  {
	  	int n;
    	scanf("%d",&n);
    	sum = 1;lastfact=1;
    for(i = 2;i<=n;++i)
    {
        fact = lastfact*i;
        if(fact > modnum )
                fact %= modnum;
        sum += fact;
        if(sum > modnum )
            sum %= modnum;
        lastfact = fact;
    }
    a[m]=sum % modnum; 
	  } 
	  for(int i=0;i<k;i++)
	  {
	  	printf("%d\n",a[i]);
	   } 
}
