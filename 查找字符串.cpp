#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	int n,m=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",&a);
		if(a[0]=='S'&&a[1]=='C'&&a[2]=='U'){
			m=1;
		}
		if(strlen(a)%2==1){
		for(int j=0;j<(strlen(a)-3)/2;j++){
			if(strstr(a,"SCU")&&a[j]=='A'&&a[strlen(a)-j-1]=='A'){
				m=1;
			}
			else{
				m=0;
				break;
			}
		}
		}
		if(strlen(a)%2==0){
		for(int j=0;j<=(strlen(a)-3)/2;j++){
			if(strstr(a,"SCU")&&a[j]=='A'&&a[strlen(a)-j-1]=='A'){
				m=1;
			}
			else{
				m=0;
				break;
			}
		}
		}
		if(m==1){
			printf("YES\n");
		}
		if(m==0){
			printf("NO\n");
		}
	}
	return 0;
}
//	if(n>10||n<0){
//        return 0;
//	}
