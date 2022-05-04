"""
2022-03-27 23:56:58
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1636 KB
Accepted | 1 * (35 / 100) | 2 ms | 1600 KB
Accepted | 1 * (60 / 100) | 4 ms | 1660 KB

"""

#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	int x;
	int sum=0;
	scanf("%d",&n);
	int i=0;
	int c=1;
	for(;i<n;i++){
		scanf("%d",&x);
		c=1;
		sum=0;
		for(;c<x;c++){
		if((x%c)==0){
		sum+=c;
		}	
		}
		if(sum==x){
			printf("YES\n");
		}
		else
		    printf("NO\n");
	}
	return 0;
}