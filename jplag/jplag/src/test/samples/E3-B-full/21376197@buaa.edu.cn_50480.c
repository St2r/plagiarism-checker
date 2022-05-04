"""
2022-03-26 12:10:44
AC
1.0
Accepted | 1 * (5 / 100) | 11 ms | 1644 KB
Accepted | 1 * (35 / 100) | 14 ms | 1544 KB
Accepted | 1 * (60 / 100) | 13 ms | 1692 KB

"""

#include<stdio.h>
int main()
{
	int n,i,j;
	int num[100];
	unsigned int x,y,sum;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%u",&x);
	    num[i-1]=x;
   }
   for(i=1;i<=n;i++){
   	y = num[i-1];
   	sum = 0;
    for(j=1;j<y;j++)
		{
			if((y%j)==0){
            sum = sum + j;
			}
			else
			sum = sum;			
		}
        if(sum == y)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}