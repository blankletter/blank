#include<stdio.h>
int main(){
    int i;
    char a[100],b[100];
    gets(a);
    for(int i=0;a[i]!='\0';i++)
    {
    	if((a[i]<='Z')&&(a[i]>='A'))
    	{
    		b[i]=a[i]+32; 
		}
    }
	printf("%s",b);
    return 0;
}
