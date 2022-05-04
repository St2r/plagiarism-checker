"""
2022-03-29 01:19:38
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1680 KB
Accepted | 1 * (35 / 100) | 1 ms | 1664 KB
Accepted | 1 * (60 / 100) | 3 ms | 1628 KB

"""

#include <stdio.h>
int main(){
int n,a[105],s=0;
scanf("%d",&n);
for(int j=0;j<n;j++){
scanf("%d",&a[j]);
for(int i=1;i<a[j];i++){
if((a[j]%i)==0) s+=i;
}
if(s==a[j]) printf("YES\n");
else printf("NO\n");
s=0;
}
return 0;
}