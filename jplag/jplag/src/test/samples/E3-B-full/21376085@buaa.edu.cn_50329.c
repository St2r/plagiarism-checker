"""
2022-03-26 08:13:45
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1660 KB
Accepted | 1 * (35 / 100) | 12 ms | 1532 KB
Accepted | 1 * (60 / 100) | 10 ms | 1656 KB

"""

#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n>0){
		int x;
		scanf("%d",&x);
		int i,sum=0;
		for(i=1;i<x;i++){
			if(x%i==0){
				sum+=i;
			}
		}
		if(sum==x){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
		n--;
	}
	return 0;
}