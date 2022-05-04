"""
2022-03-26 11:43:16
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1600 KB
Accepted | 1 * (35 / 100) | 12 ms | 1616 KB
Accepted | 1 * (60 / 100) | 18 ms | 1604 KB

"""

#include<stdio.h>

int main()
{
	int n,i,j,b[200],a[200];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<=n;i++){
		b[i]=0;
		for(j=1;j<a[i];j++){
			if(a[i]%j==0)
			b[i]=b[i]+j;
		}
		if(b[i]==a[i])
		printf("YES\n");
		else
		printf("NO\n");
	}

	
	
	return 0;
}