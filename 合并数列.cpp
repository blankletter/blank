#include<stdio.h>
int main()
{
	int i,j,k,m,n;
	//��������a
	scanf("%d",&m);
	int a[m];
	for(i=0;i<m;i++)
		scanf("%d",&a[i]);
	//��������b
	scanf("%d",&n);
	int b[n];
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
	//��ֵ����
	int c[m+n];
	i=m-1;j=0;k=0;
	while(i>=0&&j<n)
	{
		if(a[i]>=b[j])
			c[k++]=a[i--];
		else
			c[k++]=b[j++];	
	} 
	
	//������a�е�Ԫ�ػ���ʣ��
	while(i>=0)
	{
		c[k++]=a[i--];	
	} 
	//������b��Ԫ�ػ���ʣ��
	while(j<n)
	{
		c[k++]=b[j++];	
	} 
	//�������c
	for(i=0;i<k;i++)
		printf("%d ",c[i]);
	return 0; 
}

