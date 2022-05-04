"""
2022-03-26 16:46:06
AC
1.0
Accepted | 1 * (1 / 4) | 3 ms | 1700 KB
Accepted | 1 * (1 / 4) | 3 ms | 1656 KB
Accepted | 1 * (1 / 4) | 3 ms | 1544 KB
Accepted | 1 * (1 / 4) | 3 ms | 1548 KB

"""

#include <stdio.h>
#include <math.h>
int main()
{
	int n,shuzi,sum=1,a;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&shuzi);
		for(a=2;a<=sqrt(shuzi);a++){
			if(shuzi%a==0){
				sum+=a+(shuzi/a);
			}
			if(shuzi==a*a){
				sum-=a;
			}
		}
		if(sum==shuzi){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}