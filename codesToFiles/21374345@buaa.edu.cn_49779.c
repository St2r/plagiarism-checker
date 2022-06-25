"""
2022-03-26 10:26:49
AC
1.0
Accepted | 1 * (1 / 3) | 18 ms | 1652 KB
Accepted | 1 * (1 / 3) | 2 ms | 1680 KB
Accepted | 1 * (1 / 3) | 486 ms | 1656 KB

"""

#include <stdio.h>
#include <string.h>
#include<math.h>


double count(int);
int main() {

    int n,i;
    double sum=1;
    scanf("%d",&n);
    if(n<=18)
    {
    for(i=1;i<=n;i++)
    {
    	sum=sum+count(i);
	}
	printf("%.14lf",sum);
	}
	else
	{
		printf("2.71828182845905");
	}




	
	   return 0;
}
double count(int i){
	int k=i,j;
	double m=1;
	for(j=1;j<=k;j++)
	{
		m=m*j;
	}
	return 1/m;
	
}