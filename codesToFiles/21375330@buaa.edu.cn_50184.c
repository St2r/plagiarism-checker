"""
2022-03-28 23:42:40
AC
1.0
Accepted | 1 * (1 / 10) | 0 ms | 1660 KB
Accepted | 1 * (1 / 10) | 0 ms | 1684 KB
Accepted | 1 * (2 / 10) | 1 ms | 1732 KB
Accepted | 1 * (2 / 10) | 1 ms | 1732 KB
Accepted | 1 * (4 / 10) | 1 ms | 1680 KB

"""

#include<stdio.h>
int main()
{
	double e=1,a,i,j;
	int n;
	scanf("%d",&n);
	if (n<=17){
	
	for(i=1;i<=n;i++){
		a=i;
		for(j=1;i>1;i--){
			j*=i;
		}
		e+=1/j;
		i=a;
	}
	printf ("%.14f",e);}
	else
	printf("2.71828182845905\n");
	return 0; 
 }