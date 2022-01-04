#include<stdio.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int x=0;x<n;x++)
	{
		int m;
		scanf("%d",&m);
		int arr[m];
		for(int y=0;y<m;y++)
		{
			scanf("%d",&arr[y]);
		}
		for(int i=0;i<m-1;i++)
		{
			for(int j=0;j<m-1-i;j++)
			{
				if(arr[j]==0)
				{
					int temp=arr[j+1];
					arr[j+1]=arr[j];
					arr[j]=temp;
				}
			}
		}
		for(int k=0;k<m;k++)
		{
			printf("%d ",arr[k]);
		}
		printf("\n");	
	}
	return 0;
} 
