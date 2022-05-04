"""
2022-03-26 20:40:07
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 2 ms | 1700 KB
Accepted | 1 * (60 / 100) | 4 ms | 1652 KB

"""

#include <stdio.h>
int main()
{
	int n,a,sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		for(int j=1;j<a;j++){
			if(a%j==0)
			sum+=j;
		}
	
		if(sum==a)
		printf("YES\n");
		else
		printf("NO\n");
		sum=0;
	}
	return 0;
}