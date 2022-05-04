"""
2022-03-26 11:08:30
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1616 KB
Accepted | 1 * (35 / 100) | 2 ms | 1616 KB
Accepted | 1 * (60 / 100) | 14 ms | 1616 KB

"""

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=1,j=1,sum=0,a;
	for(i=1;i<=n;i++){
		scanf("%d",&a);
		for(j=1,sum=0;2*j<=a;j++){
			if(a%j==0){
				sum+=j;
			}
		}
		if(sum==a)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
 }