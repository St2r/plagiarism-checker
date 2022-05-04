"""
2022-03-27 10:11:00
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1624 KB
Accepted | 1 * (35 / 100) | 2 ms | 1540 KB
Accepted | 1 * (60 / 100) | 3 ms | 1648 KB

"""

#include <stdio.h>
 int main()
 { int n, s; scanf( "%d", & n );
 while( n-- ) { int a;
 scanf( "%d", & a ); 
int k = a / 2; 
for (int i = 1; i <=k;i++)
 { if(a%i==0) s=s+i; } 
if(s==a) printf("YES\n"); 
else printf("NO\n"); s=0; 
} 
return 0; }