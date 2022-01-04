#include<stdio.h>
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int a[m+n];
	int b[n];
	for(int i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int j=0;j<n;j++)
	{
		scanf("%d",&b[j]);
	}
	for(int k=0;k<n;k++)
	{
		a[m+k]=b[k];
	}
	for(int p=0;p<m+n-1;p++)
	{
		for(int q=0;q<m+n-1-p;q++)
		{
			if(a[q]>a[q+1])
			{
			int temp=a[q];
			a[q]=a[q+1];
			a[q+1]=temp;		
			}
		}
	}
	for(int l=0;l<m+n;l++)
	{
		printf("%d ",a[l]);
	}
	return 0;
}
