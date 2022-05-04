"""
2022-03-29 11:44:32
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1580 KB
Accepted | 1 * (35 / 100) | 1 ms | 1656 KB
Accepted | 1 * (60 / 100) | 3 ms | 1684 KB

"""

#include<stdio.h>
int main()
{
	int n,x;
	scanf("%d",&n);
	while(scanf("%d",&x)!=EOF){
		int i,sum=0;
		i=1;
		while(i<x){
			if(x%i==0){
			sum+=i;
		    }
		    i++;
		}
		if(sum==x){
			printf("YES\n");
		}
		else
		printf("NO\n");
	}	
	return 0;
}