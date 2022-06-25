"""
2022-03-27 16:29:37
AC
1.0
Accepted | 1 * (1 / 10) | 14 ms | 1640 KB
Accepted | 1 * (1 / 10) | 11 ms | 1704 KB
Accepted | 1 * (2 / 10) | 3 ms | 1640 KB
Accepted | 1 * (2 / 10) | 2 ms | 1696 KB
Accepted | 1 * (4 / 10) | 13 ms | 1708 KB

"""

#include<stdio.h>
int main()
{
	int n,i,k,j,d;
	double a[100];
	double b,sum=0;
	a[0]=1;
	scanf("%d",&n);
	for(i=1;i<100;i++)
	{
		b=1;
		for(k=1;k<=i;k++)
		{	
			b=b/k;
		}
		a[i]=b;
	}
	
	for(i=0;i<100;i++)
	{
		if(a[i]<1e-15)
		{
			j=i;
			break;//跳出循环  
		}
	}
	
	
	if(n<j){
	
	for(i=0;i<=n;i++)
	{
		sum+=a[i];
	}
    }
    
    else{
    	for(i=0;i<j;i++)
    	{
    		sum+=a[i];
		}
	}
	printf("%.14f",sum);
return 0; 
}