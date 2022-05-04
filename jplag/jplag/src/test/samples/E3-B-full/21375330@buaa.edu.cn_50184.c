"""
2022-03-28 20:36:06
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1728 KB
Accepted | 1 * (35 / 100) | 1 ms | 1688 KB
Accepted | 1 * (60 / 100) | 2 ms | 1568 KB

"""

#include<stdio.h>
int main()
{
	int n,x,i,j=0;
	scanf("%d",&n);
	while(n--){
		scanf("%d",&x); 
		for(i=1;i<x;i++){
			if(x%i==0)
			j+=i;
		}
	if(x==j)
	printf("YES\n");
	else 
	printf("NO\n");
	j=0;
}
	return 0; 
 }