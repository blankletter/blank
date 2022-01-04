#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int c[2000];
	for(int i=0;i<n;i++)
	{
		int a,b,x,y=0;
		scanf("%d",&a);
		b=a;
	while(a!=0)
	{
		x=a%10;
		y=y*10+x;
		a/=10;	
	}
	if(b==y)
	{
		c[i]=1;
	}
	else
	{
		c[i]=0;
	}	
	}
		for(int i=0;i<n;i++)
	{
		if(c[i]==1)
		{
		printf("Yes\n");
		}
		else
		{
		printf("No\n");
		}
	}
	return 0;
} 
