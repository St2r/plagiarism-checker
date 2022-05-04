"""
2022-03-29 23:54:30
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1680 KB
Accepted | 1 * (35 / 100) | 0 ms | 1736 KB
Accepted | 1 * (60 / 100) | 2 ms | 1664 KB

"""

#include<stdio.h>
int main()
{int n, a, i, j, x;
     scanf("%d",&n);
for(i = 0;i < n; i++) {
     scanf("%d", &a);
     int sum=0;
for(j = 1; j < a; j++) {
      x=a%j;
 if(x==0) {
sum=sum+j;
 }
 
}
if(sum == a) {
 printf("YES\n");
}
else {
 printf("NO\n");
}
}

return 0;
}