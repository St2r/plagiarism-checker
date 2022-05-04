"""
2022-03-29 23:46:33
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1656 KB
Accepted | 1 * (35 / 100) | 1 ms | 1664 KB
Accepted | 1 * (60 / 100) | 3 ms | 1668 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j,k,a;
	scanf("%d",&n);
	for(i=0;i<n;i++){
            k=0;
		scanf("%d",&a);
		for(j=1;j<a;j++){
			if((a%j)==0){
				k=k+j;
			}
		}
		if(k==a){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
 }