//丑数的定义是，只包含质因子 2, 3, 5 的正整数 
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int a;
		scanf("%d",&a);
//		if(a==1)
//		{
//			return 1;
//		}
		while (a >= 2 && a % 2 == 0) a /= 2;
        while (a >= 3 && a % 3 == 0) a /= 3;
        while (a >= 5 && a % 5 == 0) a /= 5;
        if(a==1)
        {
        	printf("true\n");
		}
		else
		{
			printf("false\n");
		}
	}
	return 0;
}
