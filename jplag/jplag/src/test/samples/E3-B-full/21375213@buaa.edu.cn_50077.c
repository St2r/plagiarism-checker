"""
2022-03-29 10:30:11
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1632 KB
Accepted | 1 * (35 / 100) | 1 ms | 1692 KB
Accepted | 1 * (60 / 100) | 2 ms | 1732 KB

"""

#include<stdio.h>
int main()
{int n,a;
int s;
scanf("%d\n",&n);
for(int i=0;i<n;i++)
{s=0;
 scanf("%d\n",&a);
 for(int j=1;j<a;j++)
 {
 if (a%j==0)
 s+=j;
 }
 if(s==a)
 printf("YES\n");
 else
 printf("NO\n"); 
} 
return 0;
 
}