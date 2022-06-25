"""
2022-03-26 10:21:08
AC
1.0
Accepted | 1 * (1 / 4) | 12 ms | 1632 KB
Accepted | 1 * (1 / 4) | 12 ms | 1700 KB
Accepted | 1 * (1 / 4) | 2 ms | 1640 KB
Accepted | 1 * (1 / 4) | 16 ms | 1684 KB

"""

#include <stdio.h>
#include <math.h>
#include <ctype.h>
//2.718281828 45904
int main(){
	int i,n,j,a[1010]={0};
	double e=1.0,sum=1.0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum=1.0;
		for(j=i;j>=1;j--){
			sum*=j;
			//printf("%d\n",sum);	
		}
		sum=1.0/sum;
		if(sum<=1e-16) break;
		else e+=sum;
	}
	printf("%.14f",e);
	return 0;
}