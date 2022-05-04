"""
2022-03-27 21:07:25
AC
1.0
Accepted | 1 * (1 / 8) | 5 ms | 1608 KB
Accepted | 1 * (1 / 8) | 8 ms | 1540 KB
Accepted | 1 * (1 / 8) | 2 ms | 1688 KB
Accepted | 1 * (1 / 8) | 2 ms | 1696 KB
Accepted | 1 * (1 / 8) | 2 ms | 1608 KB
Accepted | 1 * (1 / 8) | 12 ms | 1544 KB
Accepted | 1 * (1 / 8) | 5 ms | 1572 KB
Accepted | 1 * (1 / 8) | 2 ms | 1620 KB
ted | 1 * (1 / 8) | 2 ms | 1556 KB

"""

#include<stdio.h>
int main()
{
	int m,n,i,k;
	int x[n],y[n];
	scanf("%d\n",&n);
	m=0;
	while(m<=n-1)
	{
		scanf("%d\n",&x[m]);
		m++;
	}
	for(k=0;k<=n-1;k++)
	{
	  y[k]=0;
	  if(x[k]==1)
	  printf("NO\n");
	  else{
	  for(i=x[k]-1;i>=1;i--)
	  {
		if(x[k]%i==0)
		y[k]+=i;
	  }  
	  if(y[k]==x[k])
	  printf("YES\n");
	  else
	  printf("NO\n");}
    } 
return 0;		
	
 }