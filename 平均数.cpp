#include<stdio.h>
#include<math.h>
int main(){
	int n;
	float m=0,num=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%f",&num);		
		m+=num;

	}
	double x;
	x=m/n;
	printf("%.2f",x);
	
	return 0;
} 
