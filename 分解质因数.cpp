#include<stdio.h> 
int main() {
	int n;
	scanf("%d",&n);
	int m[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
	}
	for(int j=0;j<n;j++)
	{

		int i=2;
	while(m[j]>i&&m[j]<=10000)
	{
		if(m[j]%i==0)
		{
			printf("%d*",i);
			m[j]/=i;
		}else
		{
			i++;
		}
	}
	printf("%d\n",m[j]);
	}
	return 0;
}

