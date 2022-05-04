"""
2022-03-29 14:52:15
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1680 KB
Accepted | 1 * (35 / 100) | 0 ms | 1728 KB
Accepted | 1 * (60 / 100) | 2 ms | 1652 KB

"""

#include <stdio.h>
int main()
{
	int a,n,i=1,sum=0,p=1;
	scanf("%d",&n);
	while(i<=n){
		scanf("%d",&a);
		while(p<=(a/2)){
			if(a % p ==0){
				sum=sum+p;
			
			}
			p++;
		}
		if(sum==a)printf("YES\n");
		else printf("NO\n");
		i++;
		sum=0;
		p=1;
	}
	return 0;
	
}