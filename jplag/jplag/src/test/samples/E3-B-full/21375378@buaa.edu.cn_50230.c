"""
2022-03-26 13:00:22
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1708 KB
Accepted | 1 * (35 / 100) | 2 ms | 1712 KB
Accepted | 1 * (60 / 100) | 4 ms | 1712 KB

"""

#include<stdio.h>
int	main(){
	int	n,a,i,j,k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		for(j=1;j<a;j++){
			if(a%j==0)
			k+=j;
		}
		if(k==a)
		printf("YES\n");
		else	printf("NO\n");
		k=0;
	}
	return	0;
}