"""
2022-03-28 23:20:15
AC
1.0
Accepted | 1 * (5 / 100) | 1 ms | 1584 KB
Accepted | 1 * (35 / 100) | 1 ms | 1688 KB
Accepted | 1 * (60 / 100) | 3 ms | 1584 KB

"""

#include <stdio.h>
int main ()
{
	int n,i;
	int g;
    int x,y,z;
	int a[103]={0};
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}

	for(x=1;x<=n;x++)
	{
			int b[103]={0};
		 	int z=0;
		 for(y=1;y<a[x];y++)
		 {
		 
		 
		 	
		 	if(a[x]%y==0)
			 { z++;
				 
		 		b[z]=b[z-1]+y;
			 g=b[z];
			 
		 }}
		
		 if(g==a[x])
		 printf("YES\n");
		 else  
		 printf("NO\n"); 
		 
	}     
	return 0;}