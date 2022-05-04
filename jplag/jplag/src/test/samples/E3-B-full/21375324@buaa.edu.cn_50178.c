"""
2022-03-29 17:43:20
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1680 KB
Accepted | 1 * (35 / 100) | 1 ms | 1732 KB
Accepted | 1 * (60 / 100) | 2 ms | 1736 KB

"""

#include<stdio.h>
int main ()
{
   int n,m,r,i;
   int a[101];
   scanf("%d",&n);
   for(i=0;i<n;i++) {
   	scanf("%d",&a[i]);
   	r=0;
   	for(m=1;m<a[i];m++){
   		if(a[i]%m==0){
   			r=r+m;
   		    }
        }
    if(r==a[i]) printf("YES\n");
    else if(r!=a[i]) printf("NO\n");
	}
    return 0;
}