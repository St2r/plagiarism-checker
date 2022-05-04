"""
2022-03-26 16:51:33
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1556 KB
Accepted | 1 * (35 / 100) | 12 ms | 1664 KB
Accepted | 1 * (60 / 100) | 12 ms | 1660 KB

"""

#include <stdio.h>
int main ()

{
	int n,sum=0,a;
	scanf("%d",&n);
	
	for(int j=1;j<=n;j++){
		sum=0;//初始化 ！！！非常重要！ 
		scanf("%d",&a);
		for(int i=1;i<a;i++){
			if(a%i==0){
				sum+=i;
			}
		}
		if(sum==a) 
		printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
 }