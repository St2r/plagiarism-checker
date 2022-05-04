"""
2022-03-28 21:38:39
AC
1.0
Accepted | 1 * (5 / 100) | 0 ms | 1660 KB
Accepted | 1 * (35 / 100) | 1 ms | 1740 KB
Accepted | 1 * (60 / 100) | 2 ms | 1632 KB

"""

#include <stdio.h>
int main()

{
	int n,i,j,x[10005],m=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&x[i]);
	for(i=0;i<n;i++){
		for(j=(x[i]/2)+1;j>0;j--){
			if(x[i]%j==0){
				m=m+j;
			}
		}
		if(x[i]==m)
			printf("YES\n");
			else
			printf("NO\n");
		m=0;
	}
	
	return 0;
}