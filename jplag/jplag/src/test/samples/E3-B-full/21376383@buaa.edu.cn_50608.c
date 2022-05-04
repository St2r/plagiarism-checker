"""
2022-03-27 22:54:08
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1548 KB
Accepted | 1 * (35 / 100) | 2 ms | 1616 KB
Accepted | 1 * (60 / 100) | 4 ms | 1600 KB

"""

#include<stdio.h>

int main()
{
int n,i,j,sum,c;
sum=0;
c=0;
 
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
while(c<n)
 {
 for(j=1;j<a[c];j++)
  {
   if(a[c]%j==0)
   sum+=j;
  }
  if(a[c]==sum)
  printf("YES\n");
  else
  printf("NO\n");
  c++;
  sum=0;
    }

  return 0;
}