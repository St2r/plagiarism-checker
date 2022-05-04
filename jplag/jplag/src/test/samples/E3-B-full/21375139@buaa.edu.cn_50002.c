"""
2022-03-26 18:36:21
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1680 KB
Accepted | 1 * (35 / 100) | 2 ms | 1680 KB
Accepted | 1 * (60 / 100) | 3 ms | 1656 KB

"""

#include<stdio.h>
int main()
{
	int n,a,sum=0,i;
	scanf("%d",&n);
	while(scanf("%d",&a)!=EOF){
		for(i=1;i<=a/2;i++){
			if(a%i==0)
			sum=sum+i;
			else
			sum=sum;
		}if(sum==a)
		printf("YES\n");
		else
		printf("NO\n");
		sum=0;
	}
	return 0;
 }