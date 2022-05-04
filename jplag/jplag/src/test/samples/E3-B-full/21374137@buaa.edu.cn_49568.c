"""
2022-03-26 22:44:36
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1704 KB
Accepted | 1 * (35 / 100) | 6 ms | 1660 KB
Accepted | 1 * (60 / 100) | 11 ms | 1664 KB

"""

#include <stdio.h>
#include <math.h>
int judge(int x){
	int sum=0,op=0;
	for(int i=1;i<x;i++){
		if((x%i)==0) sum+=i;
	}
	if(sum==x) op=1;
	return op;
}
int main()
{
	int n,x;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&x);
		if(judge(x)==1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}