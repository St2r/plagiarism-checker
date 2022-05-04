"""
2022-03-30 16:41:47
WA
0.0
Wrong Answer | 0 * (5 / 100) | 1 ms | 1652 KB
Wrong Answer | 0 * (35 / 100) | 0 ms | 1660 KB
Wrong Answer | 0 * (60 / 100) | 0 ms | 1580 KB

"""

#include <stdio.h>
int main()
{
	int i,j,n,a[105],b,ans;
 scanf("%d\n", &n);
  for(i=0;i<n;i++)
  scanf("%d\n",&a[i]);
 for(j=1;j<=n;j++)
 if(a[i]%j==0)
 {
 b=a[i]/j;
 ans=b+j;
 ans++;
}
if(ans==a[i])
printf("YES\n");
else
printf("NO\n");
return 0;
}