"""
2022-03-27 21:40:58
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1668 KB
Accepted | 1 * (35 / 100) | 2 ms | 1604 KB
Accepted | 1 * (60 / 100) | 4 ms | 1544 KB

"""

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[105];
	for(int i=0;i<n;i++)
	  scanf("%d",&a[i]);
	for(int m=0;m<n;m++) 
	{int sum=0;
	  for(int j=1;j<a[m];j++)
	  {
	  if(a[m]%j==0)
	  sum+=j;
	  }
	  if(sum==a[m])
	  printf("YES\n");
	  else
	  printf("NO\n");
    }
	  return 0;
}