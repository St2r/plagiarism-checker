"""
2022-03-26 19:18:28
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1600 KB
Accepted | 1 * (35 / 100) | 2 ms | 1680 KB
Accepted | 1 * (60 / 100) | 4 ms | 1656 KB

"""

#include<stdio.h>
int main()
{int n,x[101],i=0,m=1,q=0;
scanf("%d",&n);
while(i<n)
{
    scanf("%d",&x[i]);
    i++;
}
i=0;
while(i<n)
{while(m<x[i])
   {if((x[i]%m)==0)
{
    q+=m;
    m++;
}
else
    m++;}

if(q==x[i])

printf("YES\n");
else
    printf("NO\n");
i++;
q=0;m=1;
}


    return 0;
}