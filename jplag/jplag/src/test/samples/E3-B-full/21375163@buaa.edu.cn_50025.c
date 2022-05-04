"""
2022-03-26 21:05:29
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1628 KB
Accepted | 1 * (35 / 100) | 3 ms | 1704 KB
Accepted | 1 * (60 / 100) | 2 ms | 1544 KB

"""

#include <stdio.h>
int main(){
	int n,i,j,sum;
	int x[105];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
	}
	for(i=0;i<n;i++){
		sum=0;
		for(j=2;j*j<=x[i];j++){
			if(x[i]%j==0&&x[i]/j!=j)	sum+=(j+x[i]/j);
			else if(x[i]%j==0&&x[i]/j==j)	sum+=j;
			else	continue;
		}
		if(sum+1==x[i]&&x[i]!=1)	printf("YES\n");
		else	printf("NO\n");
	}
	return 0;
}