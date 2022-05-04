"""
2022-03-26 22:54:13
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1560 KB
Accepted | 1 * (35 / 100) | 5 ms | 1708 KB
Accepted | 1 * (60 / 100) | 11 ms | 1664 KB

"""

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{	
	int n,i=1,j=2,d=2,c=1;
	scanf("%d",&n);
	int a[n+5];
	while(i<=n){
	scanf("%d",&a[i]);
	i++;	
	}
	i=1;
	while(i<=n){
	while(d<a[i]){
		if(a[i]%d==0){
		c=c+d;
		}
		d++;
	}
	if(c==a[i]){
	printf("YES\n");
	}
	else{
	printf("NO\n");
	}
		i++;c=1;d=2;
	}
	return 0;
 }