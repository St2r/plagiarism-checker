"""
2022-03-28 22:28:30
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1756 KB
Accepted | 1 * (1 / 10) | 0 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1688 KB
Accepted | 1 * (2 / 10) | 1 ms | 1660 KB
Accepted | 1 * (4 / 10) | 1 ms | 1624 KB

"""

#include<stdio.h>
main()
{
	int n , i=1 ,j=1,k=0;
	long long sum=1;
	double sum1=1,sum2=0;
/*	while(1)
	{
		sum*=i;
		if(sum>1e15)
		{
		//	printf("%d",&i);
			break;
		}
		i++;
	}
	*/
//	printf("%d",i);
	
	scanf("%d",&n);
	if(n<21){
	for(j=1;j<=n;j++)
	{
		for(k=1;k<=j;k++){
			sum1*=(1.0/k);
		}
	sum2=sum2+sum1;	
	sum1=1;
	}
	printf("%.14f",sum2+1);	}
	else{
		printf("2.71828182845905");
		
		}
//	}

return 0 ;
}