#include<stdio.h>
int main()
{
	int i,j,k,m,n;
	//输入数组a
	scanf("%d",&m);
	int a[m];
	for(i=0;i<m;i++)
		scanf("%d",&a[i]);
	//输入数组b
	scanf("%d",&n);
	int b[n];
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
	//赋值操作
	int c[m+n];
	i=m-1;j=0;k=0;
	while(i>=0&&j<n)
	{
		if(a[i]>=b[j])
			c[k++]=a[i--];
		else
			c[k++]=b[j++];	
	} 
	
	//若数组a中的元素还有剩余
	while(i>=0)
	{
		c[k++]=a[i--];	
	} 
	//若数组b中元素还有剩余
	while(j<n)
	{
		c[k++]=b[j++];	
	} 
	//输出数组c
	for(i=0;i<k;i++)
		printf("%d ",c[i]);
	return 0; 
}

