"""
2022-03-27 15:58:33
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1648 KB
Accepted | 1 * (35 / 100) | 2 ms | 1704 KB
Accepted | 1 * (60 / 100) | 4 ms | 1660 KB

"""

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int yz[10000]={0};
int main()
{
	int n,i,j,m,a;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a);
		int k=0;
		for(j=1;j<=a;j++){
			if(a%j==0&&a!=j){
				yz[k]=j;
				k++;
			}
		}
		int sum=0;
		for(m=0;m<k;m++){
			sum+=yz[m];
		}
		if(sum==a){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}