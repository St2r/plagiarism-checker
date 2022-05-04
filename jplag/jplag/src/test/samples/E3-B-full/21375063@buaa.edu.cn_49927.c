"""
2022-03-26 12:26:18
AC
1.0
Accepted | 1 * (1 / 4) | 9 ms | 1600 KB
Accepted | 1 * (1 / 4) | 2 ms | 1680 KB
Accepted | 1 * (1 / 4) | 10 ms | 1588 KB
Accepted | 1 * (1 / 4) | 7 ms | 1624 KB
B

"""

#include<stdio.h>
int main()
{
	int n,i=0,t,j=0,sum;
	scanf("%d",&t);
	while(i<t){
		scanf("%d",&n);
		for(sum=1,j=2;j<n;j++){
			if(n%j==0){
				sum+=j;
			}
		}
		if(sum==n){
			printf("YES");
		}else{
			printf("NO");
		}
		i++;
	}
	return 0;
}