"""
2022-03-29 21:45:12
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1692 KB
Accepted | 1 * (35 / 100) | 1 ms | 1584 KB
Accepted | 1 * (60 / 100) | 3 ms | 1652 KB

"""

#include <stdio.h>

int main()
{
int n,m=0;
int a[1000];
scanf("%d",&n);
for(int i=0;i<n;i++)
{
	m=0;
	scanf("%d",&a[i]);
	for(int j=1;j<a[i];j++)
	{
		if(a[i]%j==0)
		m=m+j;
	}
if(m==a[i])
printf("YES\n");
else
printf("NO\n");

}
 return 0;
}