"""
2022-03-27 15:22:31
AC
1.0
Accepted | 1 * (1 / 4) | 2 ms | 1620 KB
Accepted | 1 * (1 / 4) | 3 ms | 1628 KB
Accepted | 1 * (1 / 4) | 2 ms | 1544 KB
Accepted | 1 * (1 / 4) | 2 ms | 1540 KB
KB

"""

#include <stdio.h>
 #include <math.h>
 #include<string.h>
int main()
{   
    int n,i,m;
    scanf("%d",&n);
    double a[n],s=0;
    a[1]=1;
    for(i=2;i<=n;i++)
      {a[i]=a[i-1]/i;
	  }
	for(i=1;i<=n;i++)
	  {s=s+a[i];
	  }
	printf("%.14f",s+1);
     return 0; 
}