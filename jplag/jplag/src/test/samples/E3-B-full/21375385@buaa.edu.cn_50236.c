"""
2022-03-28 18:34:39
AC
1.0
Accepted | 1 * (5 / 100) | 3 ms | 1552 KB
Accepted | 1 * (35 / 100) | 2 ms | 1660 KB
Accepted | 1 * (60 / 100) | 5 ms | 1664 KB


"""

#include <stdio.h>
int main()
{
int n,a[1000],i,j,k[1000];
i=1;
scanf("%d",&n);
for(i=1;i<=n;i++){
 scanf("%d",&a[i]);
 k[i]=0;
}
i=1;
for(i=1;i<=n;i++){
 for(j=1;j<a[i];j++){
  if(a[i]%j==0){
   k[i]+=j;
  }
 }
 if(k[i]==a[i]){
  printf("YES\n");
 }
 else{
  printf("NO\n");
 }
}
return 0;
}