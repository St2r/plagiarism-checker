"""
2022-03-26 19:38:17
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1664 KB
Accepted | 1 * (35 / 100) | 2 ms | 1608 KB
Accepted | 1 * (60 / 100) | 4 ms | 1664 KB

"""

#include <stdio.h>
int main()
{
	int n, p, num[n];
	scanf("%d", &n);
	for(p=0; p<n; p++)
	{
	   scanf("%d", &num[p]);
	   int sum=0, i;
	   for(i=1;i<num[p];i++)
		   {
		      if(num[p]%i == 0)
		         sum += i;  
	       }
       if(sum == num[p])
          printf("YES\n");
       else
          printf("NO\n");
	}
    return 0;
}