"""
2022-03-28 19:20:13
AC
1.0
Accepted | 1 * (5 / 100) | 11 ms | 1656 KB
Accepted | 1 * (35 / 100) | 13 ms | 1656 KB
Accepted | 1 * (60 / 100) | 17 ms | 1600 KB

"""

#include<stdio.h>
int main()
{
	int n,a[100],i,m,x,b[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	i=0;
	while(i<n){
		b[i]=0;
		for(m=1;m<a[i];m++){
			x=a[i] % m;
			if(x==0){
				b[i]=b[i]+m;
			}
		}
		
	    i=i+1;
	}
	for(i=0;i<n;i++){
		if(b[i]!=a[i]){
			printf("NO\n");
		}else{
			printf("YES\n");
		}
	}
	return 0;
 }