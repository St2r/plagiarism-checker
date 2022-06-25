"""
2022-03-26 13:27:41
AC
1.0
Accepted | 1 * (1 / 10) | 2 ms | 1660 KB
Accepted | 1 * (1 / 10) | 2 ms | 1660 KB
Accepted | 1 * (2 / 10) | 2 ms | 1704 KB
Accepted | 1 * (2 / 10) | 3 ms | 1704 KB
Accepted | 1 * (4 / 10) | 9 ms | 1732 KB

"""

#include<stdio.h>
 int main()
 { int n;
 double e=1,s=1; 
scanf("%d",&n);
if(n<20) 
{ for(int i=1;i<n+1;i++)
 { s=s*i;
 e=e+1/s; 
} 
} 
else
 { for(int i=1;i<21;i++)
 { s=s*i;
 e=e+1/s; 
}
 } 
printf("%.14f",e); 
return 0;
 }