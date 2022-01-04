#include<stdio.h>
int fact(int n)
{
	if(n<=1)
	return 1;
	else 
	return n*fact(n-1);
 } 
 int main(){
 	int m;
 	scanf("%d",&m);
 	int sum[m]={0};
 	int q;
 	for(int i=0;i<m;i++)
 	{
 	scanf("%d",&q);
 	for(int j=1;j<=q;j++)
 	{
	sum[i]+=fact(j);
	}	
	}
 	for(int w=0;w<m;w++)
 	{
 		printf("%d\n",sum[w]);
	 }

 	return 0;
 }
