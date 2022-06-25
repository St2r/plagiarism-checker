"""
2022-03-28 21:00:19
AC
1.0
Accepted | 1 * (1 / 10) | 1 ms | 1736 KB
Accepted | 1 * (1 / 10) | 1 ms | 1688 KB
Accepted | 1 * (2 / 10) | 0 ms | 1736 KB
Accepted | 1 * (2 / 10) | 1 ms | 1732 KB
Accepted | 1 * (4 / 10) | 0 ms | 1652 KB

"""

#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	
	int i=1;
	int t=1;
	double sum=1;
	double x=1,result=1;
	
 if(n>=20){
 	printf("2.71828182845905");
 }  else{
 
	
	while(i<=n)
	{
	     for(t=1;t<=i;t++){
                               sum=sum*t;
	                      }
		i=i+1;
		t=1;
		x=1/sum;
		result=result+x;
		sum=1;
		
			
		}
		
  		
       	printf("%.14f",result);
}
          
	return 0;
	
}