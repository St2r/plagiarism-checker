"""
2022-03-27 20:48:05
AC
1.0
Accepted | 1 * (1 / 6) | 2 ms | 1696 KB
Accepted | 1 * (1 / 6) | 2 ms | 1544 KB
Accepted | 1 * (1 / 6) | 2 ms | 1544 KB
Accepted | 1 * (1 / 6) | 2 ms | 1560 KB
Accepted | 1 * (1 / 6) | 2 ms | 1704 KB
Accepted | 1 * (1 / 6) | 3 ms | 1568 KB
B

"""

#include<stdio.h>
int main(){
	int n,a[10001],i,b=0,c=1,d=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{scanf("%d",&a[i]);
	}
	while(b<n){
		b++;
		while(c<a[b]){
			if((a[b]%c)==0)
			d+=c;
			c++;
		}
		c=1;
		if(a[b]==d)
		printf("YES\n");
		else printf("NO\n");
		d=0;
	}
	return 0;
}