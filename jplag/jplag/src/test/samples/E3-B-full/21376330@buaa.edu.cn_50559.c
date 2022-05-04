"""
2022-03-26 09:04:54
AC
1.0
Accepted | 1 * (1 / 4) | 6 ms | 1624 KB
Accepted | 1 * (1 / 4) | 2 ms | 1612 KB
Accepted | 1 * (1 / 4) | 9 ms | 1668 KB
Accepted | 1 * (1 / 4) | 8 ms | 1668 KB

"""

#include<stdio.h>
#include<math.h>
int main(void)
{
	long long int n,i,j,k,xi;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&xi);
		if(i==1) printf("YES\n");
		else{
		long long int x2,rest,num=1;
		x2=sqrt(xi);
		for(j=x2;j>1;j--){
			rest=xi/j;
			if(rest==j&&rest*j==xi) num=num+j;
			else if(rest*j==xi) num=num+j+rest; 
		}
		//printf("%llu\n",num);
		if(xi==num) printf("YES\n");
		else printf("NO\n");}
	}
	return 0;
}