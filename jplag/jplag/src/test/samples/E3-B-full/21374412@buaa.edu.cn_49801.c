"""
2022-03-26 14:18:35
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1632 KB
Accepted | 1 * (35 / 100) | 3 ms | 1652 KB
Accepted | 1 * (60 / 100) | 3 ms | 1648 KB

"""

#include<stdio.h>
int main()
{
	int n,a;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		int s=0;
		for(int k=1;k<=a/2;k++){
			if(a%k==0)
			s+=k;
		}
		if(s==a)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}