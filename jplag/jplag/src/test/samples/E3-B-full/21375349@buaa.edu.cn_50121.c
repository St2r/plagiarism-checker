"""
2022-03-28 16:46:12
AC
1.0
Accepted | 1 * (1 / 10) | 3 ms | 1688 KB
Accepted | 1 * (1 / 10) | 3 ms | 1648 KB
Accepted | 1 * (2 / 10) | 2 ms | 1692 KB
Accepted | 1 * (2 / 10) | 2 ms | 1668 KB
Accepted | 1 * (4 / 10) | 2 ms | 1636 KB



"""

#include<stdio.h>
int main()
{int n,b[1000],i=0,a[1000];
scanf("%d",&n);
while(n>0)
{scanf("%d",&a[i]);
int q=1,g=0;
while(q<a[i])
{if(a[i]%q==0)
{g=g+q;
}
q++;
}
b[i]=g;
i++;
n--;
}
while(i-1>=0)
{if(a[i-1]==b[i-1])
{printf("YES\n");
}
else
{printf("NO\n");
}
i--;
}

return 0;
 }