"""
2022-03-26 09:38:08
AC
1.0
Accepted | 1 * (1 / 4) | 3 ms | 1660 KB
Accepted | 1 * (1 / 4) | 2 ms | 1668 KB
Accepted | 1 * (1 / 4) | 2 ms | 1660 KB
Accepted | 1 * (1 / 4) | 8 ms | 1660 KB

"""

#include <stdio.h>
int main()
{
int n,a[101];
int sum=0;
int i=0;
int j=1;
scanf("%d",&n);
while(i<n){
 scanf("%d",&a[i]);
 i++;
}
int p=0;
while(p<n){
 while(j<a[p]){
 if(a[p]%j==0){
    sum+=j;
 }
 j++;
 }
 j=1;
 if(sum==a[p]){
 printf("YES\n");}
 else{
    printf("NO\n");}
 p++;
 sum=0;
}


return 0;
}