"""
2022-03-26 14:49:19
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1652 KB
Accepted | 1 * (35 / 100) | 10 ms | 1544 KB
Accepted | 1 * (60 / 100) | 12 ms | 1680 KB

"""

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{
	int n,i,j,k,sum=0,num;
    scanf("%d",&n);
   
    for(sum=0,k=0;k<n;k++,sum=0){
	

	
	scanf("%d",&num);

	
	for(i=1,j=0;i<num;i++)
	{
		if(num%i==0)
		
		sum+=i;
		
	}
	if(sum==num)
	printf("YES\n");
	else
	printf("NO\n");

}

    return 0;
    
    
 }