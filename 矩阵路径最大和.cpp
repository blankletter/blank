#include<stdio.h>
int main(){
	int arr[200][200];
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int sum=0;
	sum+=arr[1][1];
	if(sum+arr[1][2]>sum+arr[2][1])
	{
		sum+=arr[1][2];
	}
	
	return 0;
} 
