#include<stdio.h>
int main()
{
	int n,m,i,x,min1,min2;
 	scanf("%d",&n);
 	while(n--)
 {
 	scanf("%d%d",&m,&min1);
  	min2=min1;
  	for(i=1;i<m;i++)
  {
  	scanf("%d",&x);
   	if(x<min1)
   {
   	min2=min1;
    min1=x;
   }
   else if(x<min2||min1==min2)
   {
   min2=x;
	}
  }
  if(min1!=min2)
  	{
  printf("%d\n",min2);
	}
    else 
	{
	printf("ERROR\n");
 }
 }
 return 0;
}
