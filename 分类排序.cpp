#include<stdio.h>
int main(){	
	int n=0;
	scanf("%d",&n);
	for(int m=0;m<n;m++)
	{
			int ji[50];
	int ou[50];
	int k=0;
	int l=0;
	do{	
		int num;
		scanf("%d",&num);
		if(num%2==0)
		{
			ou[k]=num;
			k=k+1;
		}
		else
		{
			ji[l]=num;
			l=l+1;
		}
	}while((getchar())!='\n');
	for(int q=0;q<l-1;q++)
	{
		for(int p=0;p<l-1-q;p++)
		{
			if(ji[p]>ji[p+1])
			{
			int temp1=ji[p];
			ji[p]=ji[p+1];
			ji[p+1]=temp1;
			}
		}
	}
	for(int z=0;z<k-1;z++)
	{
		for(int x=0;x<k-1-z;x++)
		{
			if(ou[x]>ou[x+1])
			{
			int temp2=ou[x];
			ou[x]=ou[x+1];
			ou[x+1]=temp2;
			 } 
		}
	}
	for(int i=0;i<l;i++)
	{
		printf("%d ",ji[i]);
	}
	for(int j=0;j<k;j++)
	{
		printf("%d ",ou[j]);
	}
	printf("\n");
	}
	return 0;
}
