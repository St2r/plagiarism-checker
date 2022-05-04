"""
2022-03-26 23:16:00
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1680 KB
Accepted | 1 * (35 / 100) | 2 ms | 1748 KB
Accepted | 1 * (60 / 100) | 4 ms | 1672 KB

"""

#include <stdio.h>
int main(){
	int a,n,c=0,i,t;
	int j[10005]={0};
	scanf("%d",&a);
	for (i=0;i<a;i++){
		scanf ("%d",&n);
		c=0;
		for(t=1;t<n;t++){
			if (n%t==0)c+=t;	
		}
		if (c==n)j[i]=1;
	} 
	for (i=0;i<a;i++){
		if (i!=0)printf ("\n");
		if (j[i]==1)printf("YES");
		else printf("NO");}
		return 0;
	}