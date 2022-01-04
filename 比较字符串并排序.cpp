#include <stdio.h>
#include <string.h>
main()
{
	int n;
	scanf("%d",&n);
   int i,j;
   char t[100];
	char a[100][100]={'\0'};
	for (i=0;i<n;i++)
		scanf("%s",&a[i]);
	for (i=0;i<n-1;i++)
		for (j=0;j<n-1-i;j++)
		{
			if (strcmp(a[j],a[j+1])>0)
			{
				strcpy(t,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],t);
			}
		}
		for (i=0;i<n;i++)
			printf("%s\n",a[i]);
}
