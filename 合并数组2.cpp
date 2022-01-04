#include<stdio.h>
#include<string.h>
int main(){
	int n=0;
	int m=0;
	scanf("%d",&m);
	scanf("%d",&n);
	int a[m]={0};
	int b[n]={0};
	for(int i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int j=0;j<n;j++)
	{
		scanf("%d",&b[j]);
	}
	int c[n+m]={0};
	for(int k=0;k<m;k++)
	{
		c[k]=a[k];
	}
	for(int l=0;l<n;l++)
	{
		c[m+l]=b[l];
	}	
	for(int h=0;h<m+n-1;h++)
	{
		for(int g=0;g<m+n-h-1;g++)
		{
			if(c[g]>c[g+1])
			{
				int temp;
				temp=c[g];
				c[g]=c[g+1];
				c[g+1]=temp;
			}
		}
	}
	for(int x=0;x<m+n;x++)
	{
		printf("%d ",c[x]);
	}
	return 0;
} 
