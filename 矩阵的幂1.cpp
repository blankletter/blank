#include <cstdio>  
#include <stdio.h>  
#define max 35  
int main()  
{  
    int A[max][max];  
    int res[max][max];  
    int n,m;  
    scanf("%d%d",&n,&m);
    for(int i = 0; i < n; i++)  
        for(int j = 0; j < n; j++){  
            scanf("%d",&A[i][j]);  
            res[i][j] = A[i][j];  
        }  
  int i;
  int t;
    for(t = 0; t < m-1; t++){  
        for( i = 0; i < n; i++)  
            for(int j = 0; j < n; j++){  
                res[i][j] = 0;  
                for(int k = 0; k < n; k++)  
                    res[i][j] += A[i][k]*A[k][j];  
            }  
        for(i = 0; i < n; i++)  
            for(int j = 0; j < n; j++)  
                A[i][j] = res[i][j];  
    }  
    for(i = 0; i < n; i++){  
        for(int j = 0; j < n; j++)  
        printf("%d ",(m == 0 ? (i == j ? 1 : 0) : res[i][j] ) );  
        printf("\n");
    }
	return 0;  
}
