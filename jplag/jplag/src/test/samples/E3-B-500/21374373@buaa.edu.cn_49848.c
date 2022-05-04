"""
2022-03-29 18:50:52
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1684 KB
Accepted | 1 * (35 / 100) | 1 ms | 1732 KB
Accepted | 1 * (60 / 100) | 3 ms | 1684 KB

"""

#include<stdio.h>
int main()
{
	int n,i,x,a,y=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x);
		a=1;y=0;
		for(a=1;a<x;a++){
			if(x%a==0){
			y+=a;
			}
		}
		if(y==x){
			printf("YES\n");
		}
		else
		printf("NO\n");
	}
	return 0;
}