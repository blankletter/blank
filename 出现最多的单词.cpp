#include<stdio.h>
#include<string.h>
int main(){
	int len;
	int i=0;
	int t=0;
	int j,c;
	char d[999];
	int m;
	int k=0;
	while((d[i]=getchar())!=EOF){
	 i++;
	}
    char a[999][999]; 
	
    len=strlen(d);
    m=len;
    i=0;
    
    for(k=0;k<len;k++){
    	if((d[k]>='a'&&d[k]<='z')||(d[k]>='A'&&d[k]<='Z')){
    		a[t][i]=d[k];
    		i++;
		}
		if(d[k]<'A'||(d[k]>'Z'&&d[k]<'a')||d[k]>'z'){
			t++;
			i=0;
			a[t][i]=d[k];
		}
	}
	int b[999];
	for(i=0;i<=t;i++){
		int cnt=0;
	    for(m=0;m<=t;m++){
	    	if(a[i][m]<='Z'&&a[i][m]>='A'){
			a[i][m]=a[i][m]+32;
		}
		}
		if(a[i][0]>='a'&&a[i][0]<='z'){
		for(j=0;j<=t;j++){
			if(strcmp(a[i],a[j])==0){
			cnt++;	   	
			}
		}
	b[i]=cnt;
	}
}
	int max=0;
	for(i=0;i<=t;i++){
		if(b[i]>max||(b[i]==max&&a[i][0]>a[c][0])){
		max=b[i];
		c=i;
		}
	}
    printf("%s",&a[c]);
	printf(" ");
	printf("%d",max);
	return 0;
}

