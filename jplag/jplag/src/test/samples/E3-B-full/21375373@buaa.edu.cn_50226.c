"""
2022-03-26 13:37:19
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1560 KB
Accepted | 1 * (35 / 100) | 3 ms | 1612 KB
Accepted | 1 * (60 / 100) | 4 ms | 1660 KB

"""

#include<stdio.h>
#include<math.h>
int main(){int n,i,j,sum,a[100];
scanf("%d",&n);
for(i=0;i<n;i++){scanf("%d",&a[i]);sum=0;
for(j=1;j<a[i];j++){if(a[i]%j==0)sum+=j;
}if(sum==a[i])printf("YES\n");
if(sum!=a[i])printf("NO\n");
} 

return 0;}