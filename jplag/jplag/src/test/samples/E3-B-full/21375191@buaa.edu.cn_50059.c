"""
2022-03-26 09:39:56
AC
1.0
Accepted | 1 * (1 / 10) | 14 ms | 1640 KB
Accepted | 1 * (1 / 10) | 9 ms | 1644 KB
Accepted | 1 * (2 / 10) | 3 ms | 1660 KB
Accepted | 1 * (2 / 10) | 3 ms | 1672 KB
Accepted | 1 * (4 / 10) | 7 ms | 1712 KB

"""

#include<stdio.h> 
int main()
{int a,n,i=0,c=0,x=0,b;
 scanf("%d",&n);
 while(i<n)
{i++;
 scanf("%d",&a);
   while(c<a-1)
   {c++;
   b=a%c;
   if(b==0)
   x=x+c;
   }
   if(x==a)
   printf("YES\n");
   else
   printf("NO\n");
   x=0;
   c=0;
}
 return 0;
}