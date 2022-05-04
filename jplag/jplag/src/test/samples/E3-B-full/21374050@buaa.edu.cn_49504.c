"""
2022-03-26 15:44:21
AC
1.0
Accepted | 1 * (5 / 100) | 2 ms | 1476 KB
Accepted | 1 * (35 / 100) | 2 ms | 1572 KB
Accepted | 1 * (60 / 100) | 11 ms | 1484 KB

"""

#include<math.h>

int main()
{
 	int i,j,n,a,count,b;
 	scanf("%d",&n);
 	for(i=1;i<=n;i++)
 	{
 		count=0;
 		scanf("%d",&a);
 		for(j=1;j<=a-1;j++)
 		{
 			if(a%j==0)
 			{
 				count+=j;
			}
		 }
		 if(count==a)
		 {
		 	printf("YES\n");
		 }
		 else printf("NO\n");
	 }
	
	return 0;
}