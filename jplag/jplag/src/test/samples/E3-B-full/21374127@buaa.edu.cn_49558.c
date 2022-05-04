"""
2022-03-28 22:03:57
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1688 KB
Accepted | 1 * (35 / 100) | 1 ms | 1680 KB
Accepted | 1 * (60 / 100) | 1 ms | 1572 KB

"""

#include<stdio.h>

int main()
{
	int i, j, n;
	int x[105];
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &x[i]);
		if((x[i]==6)||(x[i]==28)||(x[i]==496)||(x[i]==8128)){
			x[i]=0;
		}
	}
	for(j=0; j<n; j++){
		if(x[j]==0){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
    }
    return 0;
}