"""
2022-03-27 17:39:33
AC
1.0
Accepted | 1.0 * (3 / 15) | 2 ms | 1632 KB
Accepted | 1.0 * (2 / 15) | 6 ms | 1628 KB
Accepted | 1.0 * (4 / 15) | 5 ms | 1696 KB
Accepted | 1.0 * (1 / 15) | 3 ms | 1548 KB
Accepted | 1.0 * (5 / 15) | 3 ms | 1612 KB
 * (1 / 8) | 13 ms | 1548 KB
Accepted | 1 * (1 / 8) | 2 ms | 1608 KB
Accepted | 1 * (1 / 8) | 2 ms | 1544 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int a[110],s[110]={0};
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		for(j=1;j<a[i];j++)
		{
			if(a[i]%j==0)
			s[i]+=j;
		}
	}
		for(i=0;i<n;i++){
		if(s[i]==a[i])
		printf("YES\n");
		else
		printf("NO\n");}
	return 0;
}