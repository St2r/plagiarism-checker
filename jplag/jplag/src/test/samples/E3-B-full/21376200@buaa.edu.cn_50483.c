"""
2022-03-28 18:03:01
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1656 KB
Accepted | 1 * (35 / 100) | 2 ms | 1632 KB
Accepted | 1 * (60 / 100) | 4 ms | 1652 KB

"""

#include<stdio.h>

int main()
{
  int n,m,i,sum;
scanf("%d",&n);
while(n--){
scanf("%d",&m);
for(i=1,sum=0;i<m;i++){
if(m%i==0){
sum+=i;
}
}
if(sum==m)
printf("YES\n");
else
printf("NO\n");

}
    return 0;
}