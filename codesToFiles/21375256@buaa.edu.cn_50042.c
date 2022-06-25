"""
2022-03-27 19:01:47
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1704 KB
Accepted | 1 * (35 / 100) | 2 ms | 1472 KB
Accepted | 1 * (60 / 100) | 8 ms | 1692 KB

"""

#include <stdio.h>
int main()
{
  int i,N,fat;               
  double sum,dor;
  fat=1;
  sum=1;                                   
  scanf("%d",&N);
  	if(N<14)
  	{
	  for(i=1;i<=N;i++)
  	{
        fat=fat*i;
        dor=1.0/fat;
        sum+=dor;
  	}
 	printf("%.14lf",sum);
    }
    else
    {
    	 for(i=1;i<=14;i++)
  	{
        fat=fat*i;
        dor=1.0/fat;
        sum+=dor;
  	}
 	printf("%.14lf",sum);
	}
 	return 0;
}